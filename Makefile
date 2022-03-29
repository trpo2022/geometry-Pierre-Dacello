CC=gcc 
O=-o
CFLAGS=-Wall -Werror -c
SOURCE=src/geometry/
LIBSOURCE=src/libgeo/
INCLUDEPATHH=-I obj
INCLUDEPATH=-I src
TEST_SOURCES = $(shell find test -name '*.$(SRC_EXT)')
TEST_OBJECTS = $(TEST_SOURCES:test/%.c=obj/test/%.o)
all: bin/geometry clean
bin/geometry: obj/src/geometry/geometry.o obj/src/libgeo/libgeo.a
	$(CC) -o bin/geometry obj/src/geometry/geometry.o obj/src/libgeo/libgeo.a
obj/src/libgeo/libgeo.a: obj/src/libgeo/check.o 
	ar rcs obj/src/libgeo/libgeo.a obj/src/libgeo/check.o 
obj/src/geometry/geometry.o: 
	$(CC) -o obj/src/geometry/geometry.o $(CFLAGS) $(INCLUDEPATH) $(SOURCE)geometry.c
obj/src/libgeo/check.o: 
	$(CC) -o obj/src/libgeo/check.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)check.c

test: bin/test
bin/test: $(TEST_OBJECTS) obj/src/libgeo/libgeo.a
	$(CC) $(CFLAGS) -I thirdparty $^ -o $@ -lm 

clean:
	rm -rf 
.PHONY: chessviz clean
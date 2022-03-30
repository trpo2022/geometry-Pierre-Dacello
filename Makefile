CC=gcc 
O=-o
CFLAGS=-Wall -Werror -c
SOURCE=src/geometry/
LIBSOURCE=src/libgeo/
INCLUDEPATHHH=-I thirdparty
INCLUDEPATHH=-I obj
INCLUDEPATH=-I src
all: bin/geometry clean
bin/geometry: obj/src/geometry/geometry.o obj/src/libgeo/libgeo.a
	$(CC) -o bin/geometry obj/src/geometry/geometry.o obj/src/libgeo/libgeo.a -lm
obj/src/libgeo/libgeo.a: obj/src/libgeo/check.o 
	ar rcs obj/src/libgeo/libgeo.a obj/src/libgeo/check.o 
obj/src/geometry/geometry.o: 
	$(CC) -o obj/src/geometry/geometry.o $(CFLAGS) $(INCLUDEPATH) $(SOURCE)geometry.c
obj/src/libgeo/check.o: 
	$(CC) -o obj/src/libgeo/check.o $(CFLAGS) $(INCLUDEPATH) -lm $(LIBSOURCE)check.c

test: bin/test 
bin/test: obj/src/test/main.o obj/src/test/geometry_test.o obj/src/libgeo/libgeo.a
	$(CC) -o bin/test obj/src/test/main.o obj/src/test/geometry_test.o obj/src/libgeo/libgeo.a -lm
obj/src/test/main.o: 
	$(CC) -o obj/src/test/main.o $(CFLAGS) $(INCLUDEPATHHH) -lm test/main.c

obj/src/test/geometry_test.o: 
	$(CC) -o obj/src/test/geometry_test.o $(CFLAGS) $(INCLUDEPATHHH) $(INCLUDEPATH) -lm test/geometry_test.c

clean:
	rm -rf 
.PHONY: chessviz clean
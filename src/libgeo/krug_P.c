#include <stdio.h>
#include <math.h>

int per_krug(float x_krug, float y_krug, float radius, float x1_treugol, float y1_treugol, float x2_treugol, float y2_treugol, float x3_treugol, float y3_treugol)
{
	float p,Pi;
	Pi=3.14;
	p=2*radius*Pi;
	printf("/nPerimitr treugolnika%f",p);
	return p;
}

#include <stdio.h>
#include <math.h>

int per_treug(float x_krug, float y_krug, float radius, float x1_treugol, float y1_treugol, float x2_treugol, float y2_treugol, float x3_treugol, float y3_treugol)
{
	float a,b,c,p;
	a=sqrt(((x2_treugol-x1_treugol)*(x2_treugol-x1_treugol)+(y2_treugol-y1_treugol)*(y2_treugol-y1_treugol)));
	b=sqrt(((x3_treugol-x2_treugol)*(x3_treugol-x2_treugol)+(y3_treugol-y2_treugol)*(y3_treugol-y2_treugol)));
	c=sqrt(((x1_treugol-x3_treugol)*(x1_treugol-x3_treugol)+(y1_treugol-y3_treugol)*(y1_treugol-y3_treugol)));
	p=(a+b+c);
	printf("/nPerimitr treugolnika%f",p);
	return p;
}

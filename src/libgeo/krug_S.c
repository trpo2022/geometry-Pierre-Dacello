#include <stdio.h>
#include <math.h>

int plosh_kruga(float x_krug, float y_krug, float radius, float x1_treugol, float y1_treugol, float x2_treugol, float y2_treugol, float x3_treugol, float y3_treugol)
{
	float Pi,S;
	Pi=3.14;
	S=radius*radius*Pi;
	printf("/nPloshad kruga%f",S);
	return S;
}

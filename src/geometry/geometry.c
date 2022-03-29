#include <math.h>
#include <stdio.h>
#include "libgeo/check.h"

int main()
{
	double radius, x_krug, x1_treugol, x2_treugol, x3_treugol, y_krug, y1_treugol, y2_treugol, y3_treugol;
	printf("Vvesti x,y i radius dlya kruga");
	scanf("%lf %lf %lf", &x_krug, &y_krug, &radius);
	printf("\nVvesti x1, y1 dlya treugolnika");
	scanf("%lf %lf", &x1_treugol, &y1_treugol);
	printf("\nVvesti x2, y2 dlya treugolnika");
	scanf("%lf %lf", &x2_treugol, &y2_treugol);
	printf("\nVvesti x3, y3 dlya treugolnika");
	scanf("%lf %lf", &x3_treugol, &y3_treugol);
	if (radius>0)
	{
		check(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
	}
	else
	{
		printf("Error, otricatelniy radius");
	}
	return 0;
}

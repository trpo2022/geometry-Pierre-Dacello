#include <stdio.h>
#include "libgeo/check.h"

int main()
{
	float radius, x_krug, x1_treugol, x2_treugol, x3_treugol, y_krug, y1_treugol, y2_treugol, y3_treugol;
	printf("Vvesti x,y i radius dlya kruga: ");
	scanf("%f %f %f", &x_krug, &y_krug, &radius);
	printf("\nVvesti x1, y1 dlya treugolnika: ");
	scanf("%f %f", &x1_treugol, &y1_treugol);
	printf("\nVvesti x2, y2 dlya treugolnika: ");
	scanf("%f %f", &x2_treugol, &y2_treugol);
	printf("\nVvesti x3, y3 dlya treugolnika: ");
	scanf("%f %f", &x3_treugol, &y3_treugol);
	if (radius>0)
	{
		check(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
	}
	else
	{
		printf("Error, otricatelniy radius");
	}
	plosh_treug(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
	per_treug(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
	plosh_kruga(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
	per_krug(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
	return 0;
}

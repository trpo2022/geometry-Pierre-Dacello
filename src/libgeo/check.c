#include <stdio.h>
#include <math.h>

int check(float x_krug, float y_krug, float radius, float x1_treugol, float y1_treugol, float x2_treugol, float y2_treugol, float x3_treugol, float y3_treugol)
{
	float sqrt_one, sqrt_two, sqrt_three;
	sqrt_one = sqrt((x_krug - x1_treugol) * (x_krug - x1_treugol) + (y_krug - y1_treugol) * (y_krug - y1_treugol));
	sqrt_two = sqrt((x_krug - x2_treugol) * (x_krug - x2_treugol) + (y_krug - y2_treugol) * (y_krug - y2_treugol));
	sqrt_three = sqrt((x_krug - x3_treugol) * (x_krug - x3_treugol) + (y_krug - y3_treugol) * (y_krug - y3_treugol));
	if (((sqrt_one > radius) && (sqrt_two > radius) && (sqrt_three > radius)) || ((sqrt_one < radius) && (sqrt_two < radius) && (sqrt_three < radius))) 
	{
        	printf("Ne peresikayutsa\n");
        	return 0;
    } 
	else 
	{
        	printf("Peresikayutsa\n");
        	return 1;
    }
}

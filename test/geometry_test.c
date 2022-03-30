#include <ctest.h>
#include <libgeo/check.h>
#include <math.h>
#include <stdio.h>
#define size 128

CTEST(geometry_suite, simple_overlap)
{
    float x_krug = 0, y_krug = 0, radius = 3, x1_treugol = 0, y1_treugol = 0, x2_treugol = 2, y2_treugol = 5, x3_treugol = 5, y3_treugol = 0;
    int exp;
    exp = check(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
    int res;
    float sqrt_one, sqrt_two, sqrt_three;
	sqrt_one = sqrt((x_krug - x1_treugol) * (x_krug - x1_treugol) + (y_krug - y1_treugol) * (y_krug - y1_treugol));
	sqrt_two = sqrt((x_krug - x2_treugol) * (x_krug - x2_treugol) + (y_krug - y2_treugol) * (y_krug - y2_treugol));
	sqrt_three = sqrt((x_krug - x3_treugol) * (x_krug - x3_treugol) + (y_krug - y3_treugol) * (y_krug - y3_treugol));
	if (((sqrt_one > radius) && (sqrt_two > radius) && (sqrt_three > radius)) || ((sqrt_one < radius) && (sqrt_two < radius) && (sqrt_three < radius))) 
	{
		res = 0;
    } 
	else 
	{
        res = 1;
    }
    ASSERT_EQUAL(exp, res);
}

CTEST(geometry_suite, simple_not_overlap)
{
	float x_krug = -3, y_krug = -3, radius = 3, x1_treugol = 4, y1_treugol = 0, x2_treugol = 5, y2_treugol = 8, x3_treugol = 6, y3_treugol = 0;
    int exp;
    exp = check(x_krug, y_krug, radius, x1_treugol, y1_treugol, x2_treugol, y2_treugol, x3_treugol, y3_treugol);
    int res;
    float sqrt_one, sqrt_two, sqrt_three;
	sqrt_one = sqrt((x_krug - x1_treugol) * (x_krug - x1_treugol) + (y_krug - y1_treugol) * (y_krug - y1_treugol));
	sqrt_two = sqrt((x_krug - x2_treugol) * (x_krug - x2_treugol) + (y_krug - y2_treugol) * (y_krug - y2_treugol));
	sqrt_three = sqrt((x_krug - x3_treugol) * (x_krug - x3_treugol) + (y_krug - y3_treugol) * (y_krug - y3_treugol));
	if (((sqrt_one > radius) && (sqrt_two > radius) && (sqrt_three > radius)) || ((sqrt_one < radius) && (sqrt_two < radius) && (sqrt_three < radius))) 
	{
		res = 0;
    } 
	else 
	{
        res = 1;
    }
    ASSERT_EQUAL(exp, res);
}

/*************************************************************************
	> File Name: H0163.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五 12/27 12:14:33 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, C;
    scanf("%lf %lf %lf", &a, &b, &C);
    printf("%.6lf\n", sqrt(a * a + b * b - 2 * a * b * cos(C * acos(-1) / 180)));
    return 0;
}

/*************************************************************************
	> File Name: H0161.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三 12/25 21:41:31 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    float x;
    int n;
    scanf("%f %d", &x, &n);
    printf("%.6f\n", x * pow(1.06, n));
    return 0;
}

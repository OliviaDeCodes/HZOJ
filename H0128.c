/*************************************************************************
	> File Name: H0128.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:35:43 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define p  3.14

int main() {
    double n, sum = 0;
    double aver;
    scanf("%lf", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    aver = sum / n;
    printf("%.2lf\n", aver);
    return 0;
}

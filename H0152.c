/*************************************************************************
	> File Name: H0152.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:43:59 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *arr[8] = {"Start", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
    int n, x;
    scanf(" %d", &n);
    x = n + 3;
    if (x > 7) x %= 7;
    printf("%s\n", arr[x]);
    return 0;
}


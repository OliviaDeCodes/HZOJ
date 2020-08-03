/*************************************************************************
	> File Name: H0147.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:41:56 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[10000] = {0};
    scanf("%s", str);
    int l = strlen(str);
    if (((int)str[l - 1]) % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}


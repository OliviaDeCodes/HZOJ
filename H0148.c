/*************************************************************************
	> File Name: H0148.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:42:14 2019
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
    for (int i = l - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

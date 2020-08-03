/*************************************************************************
	> File Name: H0149.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:42:35 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int strtok_func(char *buff, char *flag) {
    char *p = strtok(buff, flag);
    int n;
    while (p) {
        n = strlen(p);
        p = strtok(NULL, flag);
    }
    printf("%d\n", n);
    return 0;
}

int main() {
    char str[10000] = {0};
    gets(str);
    strtok_func(str, " ");
    return 0;
}


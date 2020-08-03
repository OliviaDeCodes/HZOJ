/*************************************************************************
	> File Name: H0145.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:41:03 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, l = 0;
    char str[100] = {0};
    char temp[100] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        if (l < strlen(str)) {
            l = strlen(str);
            strcpy(temp, str);
        }
    }
    printf("%s\n", temp);
    return 0;
}

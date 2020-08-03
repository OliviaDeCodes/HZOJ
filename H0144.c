/*************************************************************************
	> File Name: H0144.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:40:44 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[100] = {0};
    scanf("%s", str);
    int i = strlen(str), cnt = 0;
    for (; i >= 0; i--) {
        if (str[i] == 'A') {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

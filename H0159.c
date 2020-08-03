/*************************************************************************
	> File Name: H0159.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:46:07 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str;
    int flag = 0;
    scanf(" %c", &str);
    while (str >= 'A') {
        for (int j = 0; j < flag; j++) {
            printf(" ");
        }
        for (char to = str; to >= 'A'; to--) {
            printf("%c", to);
        }
        for (char end = 'A'; end < str; end++) {
            printf("%c", end);
        }
        printf("\n");
        str--;
        flag++;
    }
    printf("\n");
    return 0;
}

/*************************************************************************
	> File Name: H0154.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:44:34 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, flag;
    scanf("%d", &n);
    int temp = n;
    for (int i = n; i > 0; i--) {
        flag = 0;
        for (int j = temp; j > 0; j--) {
            if (flag) printf(" ");
            printf("%d", j);
            flag++;
        }
        temp--;
        printf("\n");
    }
    return 0;
}

/*************************************************************************
	> File Name: H0095.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:25:06 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);
    while (a) {
        printf("%d", a % 10);
        a /= 10;
    }
    printf("\n");
    return 0;
}

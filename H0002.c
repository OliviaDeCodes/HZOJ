/*************************************************************************
	> File Name: H0002.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:22:47 2019
 ************************************************************************/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 0 && a < 60) printf("D\n");
    else if (a >= 60 && a < 75) printf("C\n");
    else if (a >= 75 && a < 85) printf("B\n");
    else printf("A\n");
    return 0;
}

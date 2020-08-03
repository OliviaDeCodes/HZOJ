/*************************************************************************
	> File Name: H0034.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:54:57 2019
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
    int n;
    scanf("%d", &n);
    if ((n % 100 != 0 && n % 4 == 0) || (n % 400) == 0) {
        printf("L\n");
    } else {
        printf("N\n");
    }
    return 0;
}

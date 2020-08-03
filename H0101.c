/*************************************************************************
	> File Name: H0101.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:27:04 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    long int a, num = 0;
    scanf("%ld", &a);
    while (a) {
        num += a % 10;
        a /= 10;
    }
    printf("%ld\n", num);
    return 0;
}

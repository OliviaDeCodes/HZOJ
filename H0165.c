/*************************************************************************
	> File Name: H0165.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五 12/27 12:53:46 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    long long int c;
    int n = 0;
    scanf("%lld", &c);
    for (long long int a = 1; a < c; a++) {
        long long int b = sqrt(c * c - a * a);
        if (c * c == a * a + b * b) {
            n += 1;
        }
    }
    printf ("%d\n", n / 2);
    return 0;
}

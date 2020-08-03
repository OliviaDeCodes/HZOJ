/*************************************************************************
	> File Name: H0153.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:44:16 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int WhichDay(int y, int m, int q) {
    if (m == 1 || m == 2) {
        --y; m+= 12;
    }
    int h, k, j;
    k = y % 100;
    j = y / 100;
    h = (q + 26 * ( m + 1 ) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    return h;
}

int main() {
    int y, m, q;
    scanf("%d %d %d", &y, &m, &q);
    int h = WhichDay(y, m, q);
    h += 6;
    if (h > 7) h %= 7;
    printf("%d\n", h);
    return 0;
}

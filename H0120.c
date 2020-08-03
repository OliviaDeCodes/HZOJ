/*************************************************************************
	> File Name: H0120.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:33:13 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    int monDay[13];
    bool dYear = false;
    monDay[1] = monDay[3] = monDay[5] = monDay[7] = monDay[8] = monDay[10] = monDay[12] = 31;
    monDay[4] = monDay[6] = monDay[9] = monDay[11] = 30;
    monDay[2] = 28;
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400) == 0) {
        dYear = true; monDay[2] = 29;
    }
    if (m >= 1 && m <= 12) {
        if (d >= 1 && d <= monDay[m]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("NO\n");
    }
    return 0;
}

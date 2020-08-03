/*************************************************************************
	> File Name: H0135.c
	> Author: zhengdongqi
	> Mail:
	> Created Time: 四  5/23 23:37:48 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main() {
    int n;
    int y, m, d;
    scanf("%d", &n);
    scanf("%d %d %d", &y, &m, &d);
    int monDay[13];
    monDay[1] = monDay[3] = monDay[5] = monDay[7] = monDay[8] = monDay[10] = monDay[12] = 31;
    monDay[4] = monDay[6] = monDay[9] = monDay[11] = 30;
    monDay[2] = 28;
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400) == 0) {
        monDay[2] = 29;
    }
    d += n;
    while (d > monDay[m]) {
        d -= monDay[m];
        m += 1;
        if (m > 12) {
            m = 1;
            y++;
        }
        if ((y % 100 != 0 && y % 4 == 0) || (y % 400) == 0) {
            monDay[2] = 29;
        } else {
            monDay[2] = 28;
        }
    }
    printf("%d %d %d\n", y, m, d);
    return 0;
}

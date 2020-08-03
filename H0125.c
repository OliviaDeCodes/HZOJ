/*************************************************************************
	> File Name: H0125.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:34:45 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int h, m, s, t, flag;
    scanf("%d %d %d %d", &h, &m, &s, &t);
    int hh, mm, ss;
    ss = t % 60;
    hh = t / 3600;
    mm = (t - hh * 3600) / 60;
    s += ss;
    if (s > 60) {
        s -= 60;
        m += 1;
    }
    m += mm;
    if (m > 60) {
        m -= 60;
        h += 1;
    }
    h += hh;
    if (h > 11 && h < 24) {
        if (h == 12) {
            printf("%d:%d:%dpm\n", h, m, s);
        } else {
            printf("%d:%d:%dpm\n", h - 12, m, s);
        }
    } else if (h > 23 && h < 36) {
        if (h == 24) {
            printf("%d:%d:%dam\n", 12, m, s);
        } else {
            printf("%d:%d:%dam\n", h - 24, m, s);
        }
    } else if (h > 35) {
        if (h == 36) {
            printf("%d:%d:%dpm\n", 12, m, s);
        } else {
            printf("%d:%d:%dpm\n", h - 36, m, s);
        }
    } else {
        printf("%d:%d:%dam\n", h, m, s);
    }
    double n;
    n = t;
    n /= 86400;
    printf("%.2lf%%\n", n * 100);
    return 0;
}


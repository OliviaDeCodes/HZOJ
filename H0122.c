/*************************************************************************
	> File Name: H0122.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:43:11 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int t;
    int hh, mm, ss;
    scanf("%d", &t);
    ss = t % 60;
    hh = t / 3600;
    mm = (t - hh * 3600) / 60;
    if (hh > 13) {
        printf("%02d:%02d:%02d pm\n", hh - 12, mm, ss);
    }
    if (hh >= 12 && hh < 13) {
        printf("%02d:%02d:%02d midnoon\n", hh, mm, ss);
    }
    if (hh < 12) {
        printf("%02d:%02d:%02d am\n", hh, mm, ss);
    }
    return 0;
}

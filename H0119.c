/*************************************************************************
	> File Name: H0119.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:32:52 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    int monDay[13], prey, prem, pred, aftery, afterm, afterd;
    bool dYear = false;
    monDay[1] = monDay[3] = monDay[5] = monDay[7] = monDay[8] = monDay[10] = monDay[12] = 31;
    monDay[4] = monDay[6] = monDay[9] = monDay[11] = 30;
    monDay[2] = 28;
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400) == 0) {
        dYear = true; monDay[2] = 29;
    }
    //计算前一天：
    pred = d - 1;
    prem = m;
    prey = y;
    if (pred < 1) {
        prem--;
        if (prem < 1) {
            prem = 12;
            prey--;
        }
        pred = monDay[prem];
    }
    printf("%d %d %d\n", prey, prem, pred);
    //计算后一天：
    afterd = d + 1;
    afterm = m;
    aftery = y;
    if (afterd > monDay[m]) {
        afterd = 1;
        afterm++;
        if (afterm > 12) {
            afterm = 1;
            aftery++;
        }
    }
    printf("%d %d %d\n", aftery, afterm, afterd);
    return 0;
}

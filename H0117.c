/*************************************************************************
	> File Name: H0117.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:32:12 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, rn = 0, temp, cnt = 0,arr[5] = {0};
    scanf("%d", &n);
    temp = n;
    while (temp) {
        arr[cnt] = (temp % 10);
        temp /= 10;
        cnt++;
    }
    for (int i = 0; i < cnt; i++) {
        rn += arr[i] * pow(10, cnt - i - 1);
    }
    if (n == rn) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

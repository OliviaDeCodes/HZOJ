/*************************************************************************
	> File Name: H0142.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:40:07 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_N 100000

int prime[MAX_N + 5] = {0};

bool isvalue(int n) {
    int num = n, rnum= 0;
    while (num) {
	    rnum = rnum * 10 + num % 10;//位置前移
	    num /= 10;
    }
    return rnum == n;
}

void init() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
}

int main() {
    int a, b, flag = 0;
    scanf("%d %d", &a, &b);
    init();
    for (int i = a; i <= b; i++) {
        if (prime[i] == 0 && isvalue(i)) {
            if (flag) printf(" ");
            printf("%d", i);
            flag++;
        }
    }
    printf("\n");
    return 0;
}

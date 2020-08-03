/*************************************************************************
	> File Name: H0143.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:40:27 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};

bool six(int n) {
    if (n % 6 == 0) {
        return true;
    }
    return false;
}
bool isprime(int n) {
    int x = n / 100;
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    if (!prime[x]) return true;
    return false;
}
bool ispow(int n) {
    int x = n % 100;
    for (int i = 1; i * i <= 100; i++) {
        if (x == i * i) return true;
    }
    return false;
}

int main() {
    int a, b, flag = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (six(i) && isprime(i) && ispow(i)) {
            if (flag) printf(" ");
            printf("%d", i);
            flag++;
        }
    }
    printf("\n");
    printf("%d\n", flag);
    return 0;
}


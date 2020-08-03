/*************************************************************************
	> File Name: H0156.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:45:09 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_N 10000

int prime[MAX_N + 5] = {0};

bool isprime(int n) {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    if (!prime[n]) return true;
    return false;
}
bool ispow(int n) {
    for (int i = 1; i * i <= 100; i++) {
        if (n == i * i) return true;
    }
    return false;
}

int main() {
    int a, b, flag = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        int n1 = i / 100;
        int n2 = i % 100;
        if (isprime(i) && ispow(n1) && ispow(n2)) {
            if (flag) printf(" ");
            printf("%d", i);
            flag++;
        }
    }
    printf("\n");
    printf("%d\n", flag);
    return 0;
}


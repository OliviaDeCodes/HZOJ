/*************************************************************************
	> File Name: H0068.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二 12/24 21:29:28 2019
 ************************************************************************/

#include <stdio.h>

int is_year(int n) {
    if ((n  % 100 != 0 && n % 4 == 0) || n % 400 == 0) {
        return 1;
    }
 	else {
        return 0;
    }
}

int is_big(int n){
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) {
        return 1;
    } else {
        return 0;
    }
}

int is_min(int n) {
    if (n == 4 || n == 6 || n == 9 || n == 11) {
        return 1;
    } else {
        return 0;
    }
}

int is_month(int n) {
    if (n == 2) {
        return 1;
    } 
    return 0;
}

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    if (is_year(y)) {
        if (is_month(m) && d <= 29) {
            printf("Yes\n");
        } else if (is_big(m) && d <= 31) {
            printf("Yes\n");
        } else if (is_min(m) && d <= 30) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else {
        if (is_month(m) && d <= 28) {
            printf("Yes\n");
        } else if (is_big(m) && d <= 31) {
            printf("Yes\n");
        } else if (is_min(m) && d <= 30) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}

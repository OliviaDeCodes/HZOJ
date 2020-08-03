/*************************************************************************
	> File Name: H0151.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:43:36 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int test(char l, char r) {
    unsigned int ret = 0;
    if (l == r) {
        ret = 0;
    } else if (l == 'O' && r == 'Y') {
        ret++;
    } else if (l == 'Y' && r == 'H') {
        ret++;
    } else if (l == 'H' && r == 'O') {
        ret++;
    } else {
        ret--;
    }
    return ret;
}

int main() {
    char ml, mr, ll, lr;
    scanf(" %c %c", &ml, &mr);
    scanf(" %c %c", &ll, &lr);
    if (test(ml, ll) > 0) {
        if (test(ml, lr) >= 0) {
            printf("MING\n");
            return 0;
        } else {
            if (test(mr, lr) > 0) {
                printf("MING\n");
                return 0;
            } else {
                printf("LIHUA\n");
                return 0;
            }
        }
    } else if (test(ml, ll) == 0) {
        if (test(mr, lr) > 0) {
            printf("MING\n");
            return 0;
        } else if (test(mr, lr) < 0) {
            printf("LIHUA\n");
            return 0;
        } else {
            printf("TIE\n");
            return 0;
        }
    } else {
        if (test(mr, ll) <= 0) {
            printf("LIHUA\n");
            return 0;
        } else if (test(mr, ll) > 0) {
            if (test(mr, lr) >= 0) {
                printf("MING\n");
                return 0;
            } else {
                printf("LIHUA\n");
                return 0;
            }
        }
    }
    return 0;
}

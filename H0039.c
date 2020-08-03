/*************************************************************************
	> File Name: H0039.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二 12/24 19:19:20 2019
 ************************************************************************/

#include <stdio.h>

int main() {
    int begin;
    int n;
    scanf("%d %d", &begin, &n);
    if (begin <= 0 && n >= 1) {
        begin = 0;
        printf("%d\n", begin);
        n -= 1;
        begin += 1;
    }
    while (n) {
        if ((begin % 2) == 0 && begin >= 0) {
            printf("%d\n", begin);
            n -= 1;
        }
        begin += 1;
    }
    
    return 0;
}

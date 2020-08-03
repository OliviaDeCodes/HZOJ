/*************************************************************************
	> File Name: H0090.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:23:17 2019
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b = 0, arr[2] = {0};
    scanf("%d", &a);
    while (a) {
        arr[b] = a % 10;
        a /= 10;
        if (a) b += 1;
    }
    for(; b >= 0; b--) {
        printf("%d\n", arr[b]);
    }
    return 0;
}

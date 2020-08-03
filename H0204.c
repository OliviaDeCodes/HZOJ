/*************************************************************************
	> File Name: H0204.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  1/18 17:44:13 2020
 ************************************************************************/

#include <stdio.h>

int num[10000] = {0};
int main() {
    int n;
    //int *num;
    scanf("%d", &n);
    for (int i = 1; i <= n * n; i++) {
        scanf("%d", num + i);
    }
    for (int i = 1; i <= n * n; i += n + 1) {
        printf("%d\n", num[i]);
    } 
    return 0;
}

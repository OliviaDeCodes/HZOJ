/*************************************************************************
	> File Name: H0150.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:42:52 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    unsigned int **arr;
    int n, m;
    scanf("%d %d", &n, &m);
    arr = (unsigned int **)malloc(sizeof(unsigned int *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (unsigned int *)malloc(sizeof(unsigned int) * m);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        int flag = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (flag) printf(" ");
            printf("%d", arr[j][i]);
            flag++;
        }
        printf("\n");
    }
    return 0;
}

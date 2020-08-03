/*************************************************************************
	> File Name: H0118.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:32:30 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char *arr[12] = {"monkey", "rooster", "dog", "pig", "rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep"};
int main() {
    int n, x = 0;
    scanf("%d", &n);
    x = n % 12;
    printf("%s\n", arr[x]);
    return 0;
}

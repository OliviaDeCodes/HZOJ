/*************************************************************************
	> File Name: H0146.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:41:37 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int res(char *arr) {
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            if (arr[i] == 'Z') {
                arr[i] = 'A';
            } else {
                arr[i] += 1;
            }
        } else if (arr[i] >= 'a' && arr[i] <= 'z') {
            if (arr[i] == 'z') {
                arr[i] = 'a';
            } else {
                arr[i] += 1;
            }
        }
    }
    return 0;
}

int main() {
    char str[100] = {0};
    scanf("%s", str);
    res(str);
    printf("%s\n", str);
    return 0;
}

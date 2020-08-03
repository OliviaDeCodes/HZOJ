/*************************************************************************
	> File Name: H0168.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  1/19 15:07:14 2020
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char str[100][100] = {0};
char temp[100] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < n; i++) {
        int len = strlen(str[i]);
        if (str[i][0] >= 'a' && str[i][0] <= 'z') str[i][0] -= 32;
        for (int j = 1; j < len; j++) {
            if (str[i][j] >= 'a' && str[i][j] <= 'z') continue;
            str[i][j] += 32;
        }
    }
    for(int i = 1; i <= n - 1; i++) {
      for(int j = 0; j <= n - 1 - i; j++) {
          int k = 0;
          while (str[j][k] != '\0')
          if (str[j][k] > str[j + 1][k]) {
              strcpy(temp, str[j]);
              strcpy(str[j], str[j + 1]);
              strcpy(str[j + 1], temp);
              break;
          } else if (str[j][k] == str[j + 1][k])
              k++;
            else if(str[j][k] < str[j + 1][k])
              break;
      }
  }
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}

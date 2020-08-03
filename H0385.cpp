/*************************************************************************
	> File Name: H0385.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  2/27 14:31:51 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
using namespace std;

struct person {
    int t, c;
};

int nation[100005];

int main() {
    queue<person> que;
    int n, con = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t, num;
        scanf("%d%d", &t, &num);
        while (!que.empty()) {
            person temp = que.front();
            if (t - temp.t < 86400) break;
            que.pop();
            nation[temp.c]--;
            if (nation[temp.c] == 0) con--;
        }
        for (int j = 0; j < num; j++) {
            int temp;
            scanf("%d", &temp);
            que.push({t, temp});
            if (nation[temp] == 0) con++;
            nation[temp]++;
        }
        printf("%d\n", con);
    }
    return 0;
}

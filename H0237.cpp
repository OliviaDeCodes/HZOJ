/*************************************************************************
	> File Name: H0237.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  4/ 4 20:27:10 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, num[15], cnt, mark[15];

void func(int left) {
    if (left == 0) {
        for (int i = 0; i < cnt; i++) {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (mark[i] == 0) {
            mark[i] = 1;
            num[cnt] = i;
            cnt++;
            func(left - 1);
            cnt--;
            mark[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    func(n);

    return 0;
}

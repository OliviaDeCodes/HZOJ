/*************************************************************************
	> File Name: H0216.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 15:04:19 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    string name[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        name[i] = name[i].substr(3);
    }
    sort(name, name + n);
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }

    return 0;
}

/*************************************************************************
	> File Name: H0169.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 12:01:04 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ch[100];
    for (int i = 0; i < 2 * n; i++) {
        cin >> ch[i];
    }
    string str;
    cin >> str;
    int num = 0;
    for (int i = 0; i < 2 * n; i++) {
        while (str.find(ch[i]) != -1) {
            int x;
            stringstream ss;
            ss << ch[i + 1];
            ss >> x;
            num += x;
            str.replace(str.find(ch[i]), 1, "0");
        }
    }
    cout << num << endl;
    return 0;
}

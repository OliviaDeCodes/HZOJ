/*************************************************************************
	> File Name: H0167.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 12:33:48 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string A, B;
    int n;
    cin >> A;
    cin >> n;
    cin >> B;
    cout << A.length() << endl;
    cout << A.find("a") + 1 << endl;
    A.insert(n - 1, B);
    cout << A << endl;
    return 0;
}

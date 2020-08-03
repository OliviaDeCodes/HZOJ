/*************************************************************************
	> File Name: H0166.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 12:59:49 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string A, B;
    int n;
    cin >> A;
    cin >> n;
    cin >> B;
    if (A.length() > 100) {
        cout << "100" << endl;
    } else {
        cout << A.length() << endl;
    }
    A.insert(n - 1, B);
    cout << A << endl;
    reverse(A.begin(), A.end());
    cout << A.find("x") + 1 << endl;
    return 0;
}

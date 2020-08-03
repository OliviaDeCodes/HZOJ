/*************************************************************************
	> File Name: H0220.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 2 20:31:39 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct student {
    string name;
    int arr[5];
};

bool cmp1(student a, student b) {
    if (a.arr[0] == b.arr[0]) return a.name < b.name;
    return a.arr[0] > b.arr[0];
}
bool cmp2(student a, student b) {
    if (a.arr[1] == b.arr[1]) return a.name < b.name;
    return a.arr[1] > b.arr[1];
}
bool cmp3(student a, student b) {
    if (a.arr[2] == b.arr[2]) return a.name < b.name;
    return a.arr[2] > b.arr[2];
}
bool cmp4(student a, student b) {
    if (a.arr[3] == b.arr[3]) return a.name < b.name;
    return a.arr[3] > b.arr[3];
}
bool cmp5(student a, student b) {
    if (a.arr[4] == b.arr[4]) return a.name < b.name;
    return a.arr[4] > b.arr[4];
}

int main() {
    int n;
    student stu[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        cin >> stu[i].arr[0] >> stu[i].arr[1] >> stu[i].arr[2] >> stu[i].arr[3];
        stu[i].arr[4] = stu[i].arr[0] + stu[i].arr[1] + stu[i].arr[2] + stu[i].arr[3]; 
    }
    sort(stu, stu + n, cmp1);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmp2);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmp3);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmp4);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmp5);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    return 0;
}

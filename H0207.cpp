/*************************************************************************
	> File Name: H0207.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 2 20:10:02 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct student {
    string name;
    int num[4];
    int sum;
};

student stu[40];

int main() {
    int n;
    cin >> n;
    int max_name = 0;
    int max = 0, min = 200;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> stu[i].num[j];
            stu[i].sum += stu[i].num[j];
            if (max < stu[i].num[j]) max = stu[i].num[j];
            if (min > stu[i].num[j]) min = stu[i].num[j];
        }
        cout << stu[i].sum << endl;
        if (stu[max_name].sum < stu[i].sum) max_name = i;
    }
    cout << stu[max_name].name << endl;
    cout << max << " " << min << endl;

    return 0;
}

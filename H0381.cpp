/*************************************************************************
	> File Name: H0381.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  2/27 13:26:48 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct person {
    string name;
    int ave, cla, paper, num, all;
    char officer, west;
};

person a[105];

int check(int n) {
    int temp = 0;
    if (a[n].ave > 80 && a[n].paper >= 1) temp += 8000;
    if (a[n].ave > 85 && a[n].cla > 80) temp += 4000;
    if (a[n].ave > 90) temp += 2000;
    if (a[n].ave > 85 && a[n].west == 'Y') temp += 1000;
    if (a[n].cla > 80 && a[n].officer == 'Y') temp += 850;
    return temp;
}

bool cmp(person b, person c) {
    if (b.all == c.all) {
        return b.num < c.num;
    }
    return b.all > c.all;
}

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        a[i].num = i;
        cin >> a[i].name >> a[i].ave >> a[i].cla
            >> a[i].officer >> a[i].west >> a[i].paper;
        a[i].all = check(i);
        ans += a[i].all;
    }
    sort(a, a + n, cmp);
    cout << a[0].name << endl << a[0].all << endl << ans << endl;
    return 0;
}


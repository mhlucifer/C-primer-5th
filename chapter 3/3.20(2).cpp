#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a;
    int b = 0;
    while (cin >> b) {
        a.push_back(b);
    }

    if (a.empty()) return 0; // 如果vector为空，直接返回

    size_t i = 0, j = a.size() - 1;
    while (i < j) {
        cout << a[i] + a[j] << endl;
        ++i;
        if (i == j) break;
        --j;
    }

    // 如果vector的大小是奇数，则中间的元素会被遗漏，单独输出
    if (i == j) cout << a[i] << endl;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a;
    int b = 0;
    while (cin >> b) {
        a.push_back(b);
    }

    if (a.empty()) return 0; // ���vectorΪ�գ�ֱ�ӷ���

    size_t i = 0, j = a.size() - 1;
    while (i < j) {
        cout << a[i] + a[j] << endl;
        ++i;
        if (i == j) break;
        --j;
    }

    // ���vector�Ĵ�С�����������м��Ԫ�ػᱻ��©���������
    if (i == j) cout << a[i] << endl;
    return 0;
}

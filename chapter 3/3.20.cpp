#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int b = 0;
    while (cin >> b)
    {
        a.push_back(b);
    }

    if (a.size() < 2)
    {
        cout << "Need at least two numbers" << endl;
        return 1;
    }
    else
    {
        for (decltype(a.size()) len = 0; len < a.size() - 1; len++)
        {
            int sum = a[len] + a[len + 1];
            cout << sum << endl;
        }
    }
    return 0;
}

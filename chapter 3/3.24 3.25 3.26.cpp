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
        for (auto len = a.begin();len != a.end() - 1;len++)
        {
            int sum = (*len)+ *(len+1);
            cout << sum << endl;
        }
    }
    return 0;
}
//3.26使用 mid = beg + (end - beg) / 2 而非 mid = (beg + end) / 2 是为了防止整数溢出。
//当你有两个非常大的正数 beg 和 end 时，beg + end 可能会导致整数溢出，这是一种未定义行为，可能会导致程序出现错误。通过计算 beg + (end - beg) / 2，你得到的是同样的中点，但避免了潜在的整数溢出问题。
//考虑这个简单的例子：如果 beg 是 INT_MAX - 1，end 是 INT_MAX（INT_MAX 是 <limits.h> 头文件中定义的整数的最大可能值），那么(beg + end) / 2 将会导致整数溢出。而 beg + (end - beg) / 2 将会得到正确的中间值，不会导致溢出。
//这种方法是一种常见的技巧，用于确保计算中点时不会出现整数溢出。
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
//3.26ʹ�� mid = beg + (end - beg) / 2 ���� mid = (beg + end) / 2 ��Ϊ�˷�ֹ���������
//�����������ǳ�������� beg �� end ʱ��beg + end ���ܻᵼ���������������һ��δ������Ϊ�����ܻᵼ�³�����ִ���ͨ������ beg + (end - beg) / 2����õ�����ͬ�����е㣬��������Ǳ�ڵ�����������⡣
//��������򵥵����ӣ���� beg �� INT_MAX - 1��end �� INT_MAX��INT_MAX �� <limits.h> ͷ�ļ��ж����������������ֵ������ô(beg + end) / 2 ���ᵼ������������� beg + (end - beg) / 2 ����õ���ȷ���м�ֵ�����ᵼ�������
//���ַ�����һ�ֳ����ļ��ɣ�����ȷ�������е�ʱ����������������
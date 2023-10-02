//短路求值，只有满足左边的值之后才会计算右侧的值
//4.8 从左到右运算值，相等性运算符并没定义求值顺序
//4.9 首先判断cp非空指针，然后*cp指向第一个元素，所以是H，也非空
//4.10
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	int a = 0;
	vector<int> b;
	while(cin >> a)
	{
		b.push_back(a);
		for (const int& c : b)
		{
			if (c == 42)
			{
				break;
			}
			else
				cout << c << " ";
		}
		cout << endl;
		
	}
}
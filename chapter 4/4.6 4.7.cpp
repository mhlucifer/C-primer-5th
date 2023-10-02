# include<iostream>
using namespace std;
int main()
{
	int a;
	while (cin >> a)
	{
		if (a > 0 && a % 2 == 0)
		{
			cout << "偶数" << endl;
		}
		else cout << "奇数" << endl;

	}

}
//4.7当计算的结果超出该类型所能表示的范围时就会产生溢出
//short a = 32767;a++
//unsigned uia = 0;--uia 
//unsigned usa = 65335;++usa;
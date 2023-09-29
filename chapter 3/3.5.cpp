# include<iostream>
# include<string>
using namespace std;
int main()
{
	string a, b;
	cin >> a;
	while (getline(cin ,b))//这是自己输入空格或者可以在里面写成s + " "。
	{
		a += b;
		cout << a << endl;
	}
}
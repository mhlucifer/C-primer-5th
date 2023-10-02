# include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > b && b > c && c > d)
	{
		cout << a << " " << b << " " << c << " " << d;
	}
	else
		cout << "no value" << endl;
}

//4.12 首先判断i和j不相等，然后它们的布尔值要小于k
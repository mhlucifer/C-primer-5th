# include<iostream>
using namespace std;
int value(int v)
{
	if (v >= 0)
	{
		return v;
	}
	else
		{
		return -v;
	}
}
int main()
{
	int sum = value(-3);
	cout << sum << endl;
}
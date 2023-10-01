# include<iostream>
using namespace std;
int main()
{
	int a[10] = {};
	for (int i = 0; i < sizeof(a)/sizeof(int);i++)

	{
		a[i] = i + 1;
	}
	for (auto c : a)
	{
		cout << c << endl;
	}
}
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	vector<int> a;
	int b = 0;
	while (cin >> b)
	{
		a.push_back(b);

	}
	//3.15�ĳ�string����
	for (auto i = a.begin(); i != a.end();i++)
	{
		cout << *i << endl;
	}
}
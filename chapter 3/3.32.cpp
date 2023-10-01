# include<iostream>
# include<vector>
using namespace std;
int main()
{
	vector<int> a(10);
	int value = 1;
	for (vector<int>::iterator index = a.begin(); index != a.end(); index++,value++)
	{
		*index = value;
	}

	for (auto c : a)
	{
		cout << c << endl;
	}
}
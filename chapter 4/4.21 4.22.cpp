# include<iostream>
# include<vector>
using namespace std;
int main()
{
	vector<int> a = {1,2,3,5};
	for (auto& c : a)
	{
		cout << ((c % 2 == 0) ? "ż��" : "����") << endl;
	}
}
//4.22 �ڶ����汾���������
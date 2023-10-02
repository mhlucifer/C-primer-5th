# include<iostream>
# include<vector>
using namespace std;
int main()
{
	vector<int> a = {1,2,3,5};
	for (auto& c : a)
	{
		cout << ((c % 2 == 0) ? "偶数" : "奇数") << endl;
	}
}
//4.22 第二个版本更容易理解
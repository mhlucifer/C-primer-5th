# include<iostream>
# include<vector>
using namespace std;
int main()
{
	//3.16做过了
	string word = "";
	vector<string> a;
	while (cin >> word)
	{
		a.push_back(word);
	}

	for (auto& b : a)
	{
		for (auto& c : b)
		{
			c = toupper(c);
		}
		cout << b << endl;
	}
	//3.18不合法，必须初始化之后才能使用下标赋值，所以加个初值就行
	//3.19初始化方法，vector<int> a = {42,42,42,42....}这里省略，或者vector<int> a =(10,42)   vvector<int> v3;
	/*for (int i = 0; i < 10; ++i) {
		v3.push_back(42);
	}*/
	//我个人觉得使用第二种，因为更清晰

	
}
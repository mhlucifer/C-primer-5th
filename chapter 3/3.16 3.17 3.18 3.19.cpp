# include<iostream>
# include<vector>
using namespace std;
int main()
{
	//3.16������
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
	//3.18���Ϸ��������ʼ��֮�����ʹ���±긳ֵ�����ԼӸ���ֵ����
	//3.19��ʼ��������vector<int> a = {42,42,42,42....}����ʡ�ԣ�����vector<int> a =(10,42)   vvector<int> v3;
	/*for (int i = 0; i < 10; ++i) {
		v3.push_back(42);
	}*/
	//�Ҹ��˾���ʹ�õڶ��֣���Ϊ������

	
}
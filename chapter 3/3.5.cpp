# include<iostream>
# include<string>
using namespace std;
int main()
{
	string a, b;
	cin >> a;
	while (getline(cin ,b))//�����Լ�����ո���߿���������д��s + " "��
	{
		a += b;
		cout << a << endl;
	}
}
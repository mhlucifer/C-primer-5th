# include<iostream>
# include<string>
using namespace std;
int main()
{
	string name;
	while (cin >> name)
	{
		cout << name << endl;
	}
	while (getline(cin, name))
	{
		cout << name << endl;
	}


}
//3.3 ���� is >> s �Ķ�ȡ��string�������Կ�ͷ�Ŀհײ��ӵ�һ���������ַ���ʼ��ֱ��������һ�հ�Ϊֹ��
//���� getline(is, s) �Ķ�ȡ��string�������������ж�ȡ�ַ���ֱ���������з�Ϊֹ��

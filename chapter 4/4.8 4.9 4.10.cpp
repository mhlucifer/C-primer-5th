//��·��ֵ��ֻ��������ߵ�ֵ֮��Ż�����Ҳ��ֵ
//4.8 ����������ֵ��������������û������ֵ˳��
//4.9 �����ж�cp�ǿ�ָ�룬Ȼ��*cpָ���һ��Ԫ�أ�������H��Ҳ�ǿ�
//4.10
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	int a = 0;
	vector<int> b;
	while(cin >> a)
	{
		b.push_back(a);
		for (const int& c : b)
		{
			if (c == 42)
			{
				break;
			}
			else
				cout << c << " ";
		}
		cout << endl;
		
	}
}
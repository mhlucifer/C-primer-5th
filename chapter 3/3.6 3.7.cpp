//�ַ����ı���ʹ��for(declaration:expression)
//expression��һ�����󣬱�ʾһ�����У���declaration��һ������
# include<iostream>
using namespace std;
int main()
{
	string s("hello world!!!!");
	//decltype(s.size()) punct_cnt = 0;//decltype�����������ת��������ȷ
	//for (auto c : s)
	//{
	//	if (ispunct(c))
	//		punct_cnt++;
	//	
	//}
	//cout << punct_cnt << endl;
	
	//��Ҫ�ı�string�е�ֵʱ��һ��Ҫʹ�����ã�
	//for (auto& c : s)
	//{
	//	c = toupper(c);
	//	
	//}
	//cout << s;//����ֱ�������������<<


	//��Ҫ����string�����еĵ����ַ������ַ�ʽ:1.ʹ���±� 2.ʹ�õ�����

	//�±�������������ַ���λ�ã����ظ�λ�����ַ�������
	for (auto &c : s)//����Ϊchar�᲻�ı��ַ���
	{
		if (!s.empty()&&!isspace(c))
		{
			c = 'X';
		}
	}
	cout << s << endl;
}
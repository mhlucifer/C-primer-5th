# include<iostream>
using namespace std;
//3.9���Ϸ���ʹ���±�������ַ����ǷǷ���
int main()
{
	string s = "hello,wor,,,,,,ld!1";
	string new1 = "";
	//��һ�ַ�����˫ָ��
	//decltype(s.size()) i = 0, j = 0;
	//while (j < s.size())
	//{
	//	if (!ispunct(s[j]))
	//	{
	//		s[i++] = s[j];//˫ָ��
	//	}
	//	j++;
	//}
	//s.resize(i);//�ضϺ���
	//cout << s << endl;

	//�ڶ��ַ�����һ���µ��ַ���
	/*for (auto c : s)
	{
		if (!ispunct(c))
		{
			new1 += c;
		}
	}
	cout << new1 << endl;*/ 
}

//3.11 Ҫ����forѭ���еĴ��������Ƿ�Ϸ���c��string �������ַ������ã�s�ǳ�����������forѭ���еĴ������¸�c��ֵ�ͻ�Ƿ���������ı�c��ֵ����ô�Ϸ���
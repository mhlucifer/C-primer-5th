//4.13 a iΪ3��dΪ3.0    b d��3.5 i��3
//4.14 �Ƿ�����ֵ����������ֵ����  �ڶ�����ԶΪ��
//4.15 ָ��ֵ���ܸ���int���� ��Ϊ dval = ival  = 0; pi = 0;
//4.16 a��ü������ţ��ڶ���Ӧ����==
//++i����������Ϊ��ֵ���أ����ð汾�򽫶���ԭʼֵ�ĸ�����Ϊ��ֵ����
//��������ʹ��ǰ��++��ϰ��
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	vector<int>  a = { 1,2,3,5 };
	auto pbeg = a.begin();
	while (pbeg != a.end() && *pbeg >= 0)
	{
		cout << *pbeg++ << endl;//��pbeg++,��*����Ϊ�Ǻ��ã����Խ����ý�����pbeg��++
	}
}

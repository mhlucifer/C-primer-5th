//string��ʾ�ɱ䳤���ַ�����
//string������һ�����ַ�
//��Ϊ������ʼ����ֱ�ӳ�ʼ����=���ǿ����������þ��ǿ���
//��ֵ���������ԣ���ֵһ����ֱ�ӣ�����Ҳ���Կ��ǣ����������Ǵ���һ����ʱ����
//��ִ�ж�д����ʱ��string������Զ����Կ�ͷ�Ŀհײ��ӵ�һ���������ַ���ʼ����ֱ��������һ���հ�
//ʹ��getline����һ���У����Ա����հ׷�
# include<iostream>
# include<string>
using namespace std;
int main()
{
	string name;
	while (getline(cin, name))
	{
		if(!name.empty()&& name.size() > 30)
		cout << name << endl;
	}
	return 0;
	auto len = name.size();//size_type���ͣ�����size����С��0�����޷�������
}
//����getline�������ص��Ǹ����з�ʵ���ϱ�������
//�ַ�������ֵ��string����ͬһ�����ͣ�

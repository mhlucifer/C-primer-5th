//�����������Ǻ���ԭ��
//����ʽ����ָ�ѳ���ָ�����ļ��У�ÿ���ļ���������
# include<iostream>
using namespace std;
void exchange(int* b, int* c)
{
	int temp;
	temp = *b;
	*b = *c;
	*c = temp;
}
int main()
{
	int a = 3, b =4 ;
	exchange(&a,&b);
	cout << a << endl;
	cout << b << endl;
}
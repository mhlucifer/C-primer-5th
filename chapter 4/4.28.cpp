//C++11����������ʹ�����������������ȡ���Ա�Ĵ�С
//���������ͽ���sizeof������ʱ��õ����Ǳ����ö�����ռ�ռ�Ĵ�С
//���������sizeof������ʱ��õ�������������Ĵ�С
# include<iostream>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	string d;
	float e;
	 int* p;
	int& f = a;
	cout << sizeof(a) << endl;//int 4
	cout << sizeof(b) << endl;//double 8
	cout << sizeof(c) << endl;//char 1
	cout << sizeof(d) << endl;//string 40 
	cout << sizeof(e) << endl;//float 4
	cout << sizeof(p) << endl;//8
	cout << sizeof(f) << endl;//4
}
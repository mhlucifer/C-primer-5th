//C++11中允许我们使用作用域运算符来获取类成员的大小
//对引用类型进行sizeof操作的时候得到的是被引用对象所占空间的大小
//对数组进行sizeof操作的时候得到的是整个数组的大小
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
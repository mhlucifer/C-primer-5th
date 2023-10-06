//如果函数无须改变引用形参的值，最好将其声明为引用类型
# include<iostream>
using namespace std;
void reset(int &p)//6.11
{
	p = 0;
}
void swap(int& a, int& b)//6.12   引用更便于使用
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//6.13 一个是值传递，一个是引用传递

//6.14 1.改变参数值的应该是引用传递，比如交换两数， 不改变值的应该是值传递，比如参数之和
//6.15 因为字符串可能很长，因此使用引用避免拷贝；而在函数中我们不希望改变 s 的内容，所以令 s 为常量。
//occurs 是要传到函数外部的变量，所以使用引用，occurs 的值会改变，所以是普通引用。
//因为我们只需要 c 的值，这个实参可能是右值(右值实参无法用于引用形参)，所以 c 不能用引用类型。
//如果 s 是普通引用，也可能会意外改变原来字符串的内容。
//occurs 如果是常量引用，那么意味着不能改变它的值，那也就失去意义了。
int main()
{
	int a = 9;
	reset(a);
	cout << a << endl;
	int b = 10;
	swap(a, b);
	cout << a << " "<<b << endl;
}
void compare(int a, int b)
{
	int a;
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
}
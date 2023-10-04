//函数声明就是函数原型
//分离式编译指把程序分割到几个文件中，每个文件独立编译
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
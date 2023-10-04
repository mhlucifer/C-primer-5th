//6.1 实参是实际使用的参数，是形参的初始值。
//6.2 a string f()  b void f2(int i){} c int calc(int v1,int v2) d double square(double x) return x*x
# include<iostream>
int fact(int a)
{
	return a;
}
using namespace std;
int main()
{
	int b;
	b = fact(3);
	cout << b << endl;
}

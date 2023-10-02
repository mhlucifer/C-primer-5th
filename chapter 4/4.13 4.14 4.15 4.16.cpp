//4.13 a i为3，d为3.0    b d是3.5 i是3
//4.14 非法，左值不能是字面值常量  第二个永远为真
//4.15 指针值不能赋给int类型 改为 dval = ival  = 0; pi = 0;
//4.16 a最好加上括号，第二个应该用==
//++i将对象本身作为左值返回，后置版本则将对象原始值的副本作为右值返回
//建议养成使用前置++的习惯
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	vector<int>  a = { 1,2,3,5 };
	auto pbeg = a.begin();
	while (pbeg != a.end() && *pbeg >= 0)
	{
		cout << *pbeg++ << endl;//先pbeg++,再*，因为是后置，所以解引用结束，pbeg才++
	}
}

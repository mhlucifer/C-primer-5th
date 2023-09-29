//类型别名，TYPEDEF
//2.33 
# include<iostream>
int main()
{
	//auto i = 0, * p = &i;
	////auto sz = 0, pi = 3.14;pi默认是double ，但之前是int
	//int i = 0, &r = i;
	//auto a = r;
	//const int ci = i, & cr = ci;
	//auto b = ci;
	//auto c = cr;
	//auto d = &i;
	//auto e = &ci;
	//const auto f = ci;
	//auto& g = ci;
	////auto& h = 42;//非常量引用的初始值必须为左值
	//const auto& j = 42;

	//a = 42;
	//b = 42;
	//c = 42;
	//d = 42;//int类型的值分配到int*上
	//e = 42;//int分配到const int* 
	//g = 42;//g不可被修改
	const int i = 42;
	auto j = i; const auto & k = i, auto * p = &h;//无法判断
	const auto j2 = i, &k2 = i;

	//decltype用来不初始化的情况下判断值的类型，作用是选择并返回操作数的类型
}

//2.35
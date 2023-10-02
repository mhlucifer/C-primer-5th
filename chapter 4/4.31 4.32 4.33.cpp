//4.31 因为要尽量避免后置运算符，中间增加了一个拷贝操作的开销，这里无论使用前置和后置都没有影响
//4.32 遍历数组ia
//4.33 (someValue ? ++x, ++y : --x), --y
//如果 someValue的值为真，x 和 y 的值都自增并返回 y 值，然后丢弃 y 值，y递减并返回 y 值。如果 someValue的值为假，x 递减并返回 x 值，然后丢弃 x 值，y递减并返回 y 值

# include<iostream>'
using namespace std;
int main()
{
	int a = 32;
	void* p = &a;
	double* dp = static_cast<double*>(p);//将p强制转换成初始指针类型
	//但要确保指针的值保持不变，否则会导致未定义的结果

	const char* pc;
	char* p = const_cast<char*>(pc);//

}
# include<iostream>
int main()
{
	bool b = 42; //强转成1
	unsigned char c = -1;//会被强转成255，无符号值总数取模后的余数，即 256取模的余数
	//signed char a = 256;//值会变成未定义
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}
# include<iostream>
int main()
{
	int sum = 0;
	for (int a = 50; a <= 100; a++)
	{
		sum += a;
	}
	std::cout << sum << std::endl;//1.13

	int sum1 = 0;
	for (int a = 10; a >= 0; a--)
	{
		sum1 += a;
		
	}
	std::cout << sum1 << std::endl;//1.13

	int a = 0, b = 0, sum2 = 0;
	std::cout << "enter two numbers" << std::endl;
	std::cin >> a >> b;
	int start = (a < b) ? a : b;
	int end = (a > b) ? a : b;
	for (start; start <= end; start++)
	{
		std::cout << start << " ";
	}//1.13

	//1.14 reference:https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming

	//1.15 three type error:1.syntax 2.type 3.declaration
}
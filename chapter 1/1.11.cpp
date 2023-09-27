# include<iostream>
int main()
{
	int a, b;
	std::cout << "enter two numbers" << std::endl;
	std::cin >> a >> b;
	int start = (a < b) ?a : b;
	int end = (a > b) ? a : b;
	while (start <= end)
	{
		std::cout << start << std::endl;
		start++;
	}
	
	
	

}
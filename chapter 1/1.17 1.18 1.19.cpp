# include<iostream>
int main()
{
	int a, b;
	while (true)
	{
		std::cout << "enter one number: " << std::endl;
		if (std::cin >> a)
		{
			std::cout << "enter another number: " << std::endl;
			while (std::cin >> b)
			{
				if (a > b)
				{
					while (b <= a) // a >b 
					{
						std::cout << b << " ";
						b++;

					}
				}
				else
				{
					while (a <= b)// b > a
					{

						std::cout << a << " ";
						a++;

					}
				}
				std::cout << std::endl;
				break;
				
			}
		}
	}
	
}
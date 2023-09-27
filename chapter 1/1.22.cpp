# include"Sales_item.h"
# include<iostream>
int main()
{
	Sales_item isbn1,isbn2;
	std::cout << "input first isbn" << std::endl;
	if (std::cin >> isbn1)
	{
		Sales_item sum;
		while (true)
		{
			std::cout << "input next isbn" << std::endl;
			while (std::cin >> isbn2)
			{
				if (isbn1.isbn() == isbn1.isbn())
				{
					sum += isbn1;
				}
				else
				{
					std::cout << "Different ISBN." << std::endl;
				}
				break;
			}
			std::cout << sum << std::endl;
		}
		
	}
	

}
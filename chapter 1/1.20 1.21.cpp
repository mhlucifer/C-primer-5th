# include"Sales_item.h"
# include<iostream>
int main()
{
	Sales_item isbn1, isbn2;
	std::cout << "please input two isbn" << std::endl;
	std::cin >> isbn1 >> isbn2;
	if (isbn1.same_isbn(isbn2))
	{
		std::cout << isbn1.isbn + isbn2.isbn << std::endl;
	}
	else
	{
		std::cerr << "different isbn" << std::endl;
	}
}
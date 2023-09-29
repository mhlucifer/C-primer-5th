# include<iostream>
struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
		//类内名字必须唯一，和类外可以不同
};
//struct Foo {}
//int main()
//{
//	return 0;
//}请输入分号
struct Student
{
	std::string name;
	unsigned age = 0;
	int Id_card = 0.0;
	//类内名字必须唯一，和类外可以不同
};
# include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int sum = 0;
	while (a >= 0)
	{
		sum += a;
		a--;
	}
	std::cout << sum << std::endl;
}
# include<iostream>
using namespace std;
int mult(int d)
{
	int vet = 1;
	while (d > 1)
	{
		vet *= d--;
	}
	return vet;
}
int main()
{
	
	int b;
	while (cin >> b)
	{
		int result;
		result = mult(b);
		cout << result << endl;
	}
	

}
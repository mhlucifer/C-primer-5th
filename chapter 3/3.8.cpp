# include<iostream>
using namespace std;
int main()
{
	string s = "hello world!!!";
	/*decltype(s.size()) index = 0;
	while (index != s.size())
	{
		if(!isspace(s[index]))
		s[index] = 'X';
		index++;
	}
	cout << s << endl;*/
	for (decltype(s.size()) index = 0; index != s.size(); index++)
	{
		if (!isspace(s[index]))
			s[index] = 'X';
	}
	cout << s << endl; 

}
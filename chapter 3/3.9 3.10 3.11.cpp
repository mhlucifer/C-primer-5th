# include<iostream>
using namespace std;
//3.9不合法，使用下标操作空字符串是非法的
int main()
{
	string s = "hello,wor,,,,,,ld!1";
	string new1 = "";
	//第一种方法，双指针
	//decltype(s.size()) i = 0, j = 0;
	//while (j < s.size())
	//{
	//	if (!ispunct(s[j]))
	//	{
	//		s[i++] = s[j];//双指针
	//	}
	//	j++;
	//}
	//s.resize(i);//截断后面
	//cout << s << endl;

	//第二种方法找一个新的字符串
	/*for (auto c : s)
	{
		if (!ispunct(c))
		{
			new1 += c;
		}
	}
	cout << new1 << endl;*/ 
}

//3.11 要根据for循环中的代码来看是否合法，c是string 对象中字符的引用，s是常量。因此如果for循环中的代码重新给c赋值就会非法，如果不改变c的值，那么合法。
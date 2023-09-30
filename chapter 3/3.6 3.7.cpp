//字符串的遍历使用for(declaration:expression)
//expression是一个对象，表示一个序列，而declaration是一个变量
# include<iostream>
using namespace std;
int main()
{
	string s("hello world!!!!");
	//decltype(s.size()) punct_cnt = 0;//decltype不会进行类型转换，更精确
	//for (auto c : s)
	//{
	//	if (ispunct(c))
	//		punct_cnt++;
	//	
	//}
	//cout << punct_cnt << endl;
	
	//想要改变string中的值时，一定要使用引用！
	//for (auto& c : s)
	//{
	//	c = toupper(c);
	//	
	//}
	//cout << s;//可以直接输出，重载了<<


	//想要访问string对象中的单个字符有两种方式:1.使用下标 2.使用迭代器

	//下标运算符，访问字符的位置，返回该位置上字符的引用
	for (auto &c : s)//设置为char会不改变字符串
	{
		if (!s.empty()&&!isspace(c))
		{
			c = 'X';
		}
	}
	cout << s << endl;
}
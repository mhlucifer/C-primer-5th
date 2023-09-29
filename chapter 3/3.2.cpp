//string表示可变长的字符序列
//string最后会有一个空字符
//分为拷贝初始化和直接初始化，=号是拷贝，不适用就是拷贝
//单值创建都可以，多值一般用直接，拷贝也可以考虑，但本质上是创建一个临时对象
//在执行读写操作时，string对象会自动忽略开头的空白并从第一个真正的字符开始读，直到遇到下一处空白
//使用getline输入一整行，可以保留空白符
# include<iostream>
# include<string>
using namespace std;
int main()
{
	string name;
	while (getline(cin, name))
	{
		if(!name.empty()&& name.size() > 30)
		cout << name << endl;
	}
	return 0;
	auto len = name.size();//size_type类型，另外size不能小于0，是无符号整型
}
//触发getline函数返回的那个换行符实际上被丢弃了
//字符串字面值和string不是同一种类型！

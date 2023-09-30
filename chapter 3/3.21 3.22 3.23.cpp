//迭代器成员end返回的是尾元素后一个
//习惯使用!=式子
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	/*vector<int> v1(10,0);
	for (vector<int>::iterator index = v1.begin(); index != v1.end(); index++)
	{
		cout << *index << endl;
	}*/
        vector<string> v1 = { "test", "diws" };
        for (auto index = v1.begin(); index != v1.end(); ++index) // 使用 auto 使代码更简洁
        {
            for (auto& ch : *index) // 遍历字符串中的每个字符
            {
                if (!isspace(ch)) // 如果字符不是空格
                {
                    ch = toupper(ch); // 将字符转换为大写
                }
            }
            cout << *index << endl; // 输出转换后的字符串
        }
        return 0;
    }

//3.23思路一样就不写了
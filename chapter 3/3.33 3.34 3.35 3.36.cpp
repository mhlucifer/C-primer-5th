//使用数组类型的对象其实是使用一个指向数组首元素的指针
//当使用数组作为一个auto变量的初始值时，推断得到的类型是指针而非数组
//使用decltype时不会发生，依旧是数组
//指针也是迭代器
//数组末尾的元素也可以指到，比如a[9],那么可以设置尾为int *e = &arr[10];
//但这样也容易出错误，所以新的可以使用beign 和end
//int *beg = begin(ia)   int *end = end(ia)
//数组的指针可以进行和迭代器一样的操作，但不适用于空指针和不是数组的指针
//3.33 所有元素的值将未定义
//3.34 因为指向同一数组的元素，所以一定合法
//3.35
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	int arr[10] = {};
	int * beg = begin(arr);
	int* last = end(arr);
	for (beg; beg != last; beg++)
	{
		*beg = 0;
	}

	for (auto c : arr)
	{
		cout << c << endl;
	}

}
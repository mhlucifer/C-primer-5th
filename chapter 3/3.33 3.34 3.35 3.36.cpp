//ʹ���������͵Ķ�����ʵ��ʹ��һ��ָ��������Ԫ�ص�ָ��
//��ʹ��������Ϊһ��auto�����ĳ�ʼֵʱ���ƶϵõ���������ָ���������
//ʹ��decltypeʱ���ᷢ��������������
//ָ��Ҳ�ǵ�����
//����ĩβ��Ԫ��Ҳ����ָ��������a[9],��ô��������βΪint *e = &arr[10];
//������Ҳ���׳����������µĿ���ʹ��beign ��end
//int *beg = begin(ia)   int *end = end(ia)
//�����ָ����Խ��к͵�����һ���Ĳ��������������ڿ�ָ��Ͳ��������ָ��
//3.33 ����Ԫ�ص�ֵ��δ����
//3.34 ��Ϊָ��ͬһ�����Ԫ�أ�����һ���Ϸ�
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
//4.31 ��ΪҪ�������������������м�������һ�����������Ŀ�������������ʹ��ǰ�úͺ��ö�û��Ӱ��
//4.32 ��������ia
//4.33 (someValue ? ++x, ++y : --x), --y
//��� someValue��ֵΪ�棬x �� y ��ֵ������������ y ֵ��Ȼ���� y ֵ��y�ݼ������� y ֵ����� someValue��ֵΪ�٣�x �ݼ������� x ֵ��Ȼ���� x ֵ��y�ݼ������� y ֵ

# include<iostream>'
using namespace std;
int main()
{
	int a = 32;
	void* p = &a;
	double* dp = static_cast<double*>(p);//��pǿ��ת���ɳ�ʼָ������
	//��Ҫȷ��ָ���ֵ���ֲ��䣬����ᵼ��δ����Ľ��

	const char* pc;
	char* p = const_cast<char*>(pc);//

}
//���ͱ�����TYPEDEF
//2.33 
# include<iostream>
int main()
{
	//auto i = 0, * p = &i;
	////auto sz = 0, pi = 3.14;piĬ����double ����֮ǰ��int
	//int i = 0, &r = i;
	//auto a = r;
	//const int ci = i, & cr = ci;
	//auto b = ci;
	//auto c = cr;
	//auto d = &i;
	//auto e = &ci;
	//const auto f = ci;
	//auto& g = ci;
	////auto& h = 42;//�ǳ������õĳ�ʼֵ����Ϊ��ֵ
	//const auto& j = 42;

	//a = 42;
	//b = 42;
	//c = 42;
	//d = 42;//int���͵�ֵ���䵽int*��
	//e = 42;//int���䵽const int* 
	//g = 42;//g���ɱ��޸�
	const int i = 42;
	auto j = i; const auto & k = i, auto * p = &h;//�޷��ж�
	const auto j2 = i, &k2 = i;

	//decltype��������ʼ����������ж�ֵ�����ͣ�������ѡ�񲢷��ز�����������
}

//2.35
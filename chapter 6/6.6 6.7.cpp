//�ֲ���̬����Ϊ��ʹ�ֲ��������������ڹᴩ�������ü����Ժ����ó�static
//6.6 �βζ����ں����β��б����棻�ֲ����������ڴ�������棻�ֲ���̬�����ڳ����ִ��·����һ�ξ������������ʱ��ʼ��������ֱ��������ֹʱ�ű����١�
//6.7 
# include<iostream>
int generate()
{
    static int ctr = 0;
    return ctr++;
}
int main()
{
    generate(); 
    generate();
    generate();
    std::cout << generate() << std::endl;
}
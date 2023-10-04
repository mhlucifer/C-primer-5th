//局部静态对象，为了使局部变量的生命周期贯穿函数调用及其以后。设置成static
//6.6 形参定义在函数形参列表里面；局部变量定义在代码块里面；局部静态变量在程序的执行路径第一次经过对象定义语句时初始化，并且直到程序终止时才被销毁。
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
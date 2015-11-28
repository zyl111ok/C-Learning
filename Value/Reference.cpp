#include <iostream>
int main()
{ 
	int ival=1024;
	//定义一个引用,必须被初始化
	int &irefer=ival;
	int i=ival;
	irefer=124;
	i=128;
	//输出结果是124，因为irefer把ival绑定在一起，改变值一起改变，而i只是一个把ival的值
	//赋值给它的新的变量
	std::cout<<ival<<std::endl;
	//输出0x246ff04
	std::cout<<&irefer<<std::endl;
	//输出0x246ff04
	std::cout<<&ival<<std::endl;
	return 0;
}
#include <iostream>
int main()
{ 
	using namespace std;
	const int ci=1024;
	const int &r1=ci;
	//r1=42 错误:r1是对常量的引用
	int i=42,j=23;
	int &r2=i;
	//输出r2的地址&r2
	cout<<" & r2: "<<&r2<<endl;
	const int &r3=i;
	r2=16;
	r2=j;
	//观察是值改变还是地址改变
	cout<<" & r2: "<<&r2<<endl;
	cout<<" r3: "<<r3<<endl;

	const double pi=3.14;
	const double *ptr=&pi;
	//错误：不能给指向常量的指针赋值*ptr=3.1415;
	double dval=3.1415;
	//指向常量的指针可以指向非常量
	ptr=&dval;
	cout<<" *ptr: "<<*ptr<<endl;
	//定义一个常指针
	int errnumb=0,corret=1;;
	int *const curErr=&errnumb;
	//curErr=&corret;编译器报错:试图改变常指针的指向
	*curErr=404;//正确:指针本身是常量并不意味着不能通过指针修改其所指对象的值
	cout<<" errnumb: "<<errnumb<<endl;
	double *p=ptr;//正确顶层const可以拷贝
	int *p1=curErr;
	//错误，*p不包含底层const的定义，底层const不能拷贝，否则这将试图改变常指针的指向

}
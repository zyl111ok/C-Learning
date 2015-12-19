#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{ 
	void test4_28();
	void test4_29();
	void testComma();
	//test4_28();
	//test4_29();
	testComma();
	return 0;
}
/**
*C++primer练习4.28
*/
void test4_28()
{ 
	char a;
	cout<<"char: "<< sizeof(a)<<endl;
	int b;
	printf("int b: %d\n",sizeof(b));
	unsigned char c;
	cout<<"unsigned char: "<<sizeof(c)<<endl;
	unsigned int d;
	cout<<"unsigned int: "<<sizeof(d)<<endl;
	bool e;
	cout<<"bool: "<<sizeof(e)<<endl;
	short f;
	cout<<"short: "<<sizeof(f)<<endl;
	float g;
	cout<<"float: "<<sizeof(g)<<endl;
	double h;
	cout<<"double: "<<sizeof(h)<<endl;
	long i;
	cout<<"long: "<<sizeof(i)<<endl;
	long long j;
	cout<<"long long: "<<sizeof(j)<<endl;
	long double k;
	cout<<"long double: "<<sizeof(k)<<endl;

}
/**
*C++primer练习4.29
*/
void test4_29()
{ 
	int x[10];
	int *p;
	cout <<sizeof(x)/sizeof(*x)<<endl;
	cout <<sizeof(p)<<endl;
}
/**
*逗号运算符性质测试
*/
void testComma()
{ 
	int commaExpr;
	int x=0,y=1;
	//注意逗号运算符的顺序
	commaExpr= (++x , --x);
	cout<<commaExpr<<endl;
}
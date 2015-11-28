#include <iostream>
int main()
{ 
	int i=5,j=6;
	int *p=&i;
	int *d=&j;
	//指向指针的引用,*号说明它引用的是一个指针
	int *&r=d;
	*r=7;
	cout<<j<<endl;
	cout<<"*p:  "<<*p<< " p:　"<<p<<" &p:　"<<&p<<" &i: "<<&i<<endl;
	//为p所指的对象赋值（p指向的内存空间）
	*p=6;
	cout<<i<<endl;
	//空指针赋值
	//int *p1=nullptr;
	int *p2=NULL;
	return 0;
}
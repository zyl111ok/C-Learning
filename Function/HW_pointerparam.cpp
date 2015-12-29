#include <iostream>
using namespace std;
/**
*通过引用传递的思想实现交换两个参数
*/
void swappointer(int* &p1,int* &p2)
{ 
	auto temp=p1;
	p1=p2;
	p2=temp;
}
void compare(int* p1,int* p2)
{ 
	auto temp=p1;
	p1=p2;
	p2=temp;
}
void test6_22()
{ 
	int i=5,j=6;
	cout<<i<<" "<<j<<endl;
	int *lval=&i;
	int *rval=&j;
	compare(lval,rval);
	cout<<*lval<<" "<<*rval<<endl;
	swappointer(lval,rval);
	cout<<*lval<<" "<<*rval<<endl;
}
int main()
{
	test6_22();
	return 0; 
}
#include <iostream>
using namespace std;
/**
*通过指针形参交换两个实参的值
*/
void swap(int* a,int* b)
{ 
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{ 
	int i=5,j=6;
	cout <<"before swap: "<<"i= "<<i<<", "<<"j= "<<j<<endl;
	swap(&i,&j);
	cout <<"after swap: "<<"i= "<<i<<", "<<"j= "<<j<<endl;
	return 0;
}
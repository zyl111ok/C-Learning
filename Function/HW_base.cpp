#include <iostream>
using namespace std;
/**
*求n的阶乘的函数
*/
int fact(int n)
{ 
	if(n==0||n==1)
		return 1;
	else
		return n*fact(n-1);
}
/**
*输出一个数的绝对值
*/
void outputabs(int n)
{ 
	if(n<0)
		cout <<" the abs of n is "<<-n<<endl;
	else
		cout<<" the abs of n is "<<n<<endl; 
}
int main()
{ 
	cout<<fact(5)<<endl;
	outputabs(-8);
	return 0;
} 
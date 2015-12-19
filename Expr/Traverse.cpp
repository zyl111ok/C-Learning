#include <iostream>
#include <math.h>
#include <typeinfo>
using namespace std;
int reverse(int x)
{
	int i,j,s,n,t;

	n=0;s=0;
	for(i=0;;i++)
	{
		if((int)(x/pow(10,i))!=0)
		n++;
		else break;
	}
	for(j=n-1;j>=0;j--)
	{
		s+=((int)(x/pow(10,j)))%10*pow(10,n-1-j);
	}
	return s;
}
int main()
{
	int m,k;
	k=0;
	cout<<"type of pow(int a,int b): "<<typeid(pow(4,2)).name()<<endl;
	for(m=10001;;m++)
	{
		if(m==reverse(m))
		{
			k++;
			cout<<m<<endl;
		}
		if(k==10)break;
	}
	system("pause");
	return 0;
}
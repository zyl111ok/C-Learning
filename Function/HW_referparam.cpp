#include <iostream>
using namespace std;
void reset(int &i)
{ 
	i=0;
}
/**
*测试通过值传递交换的效果
*/
void compare(int *a,int *b)
{ 
	int *temp;
	temp=a;
	a=b;
	b=temp;
}
/**
*通过引用交换两个数
*/
void swap(int &a,int &b)
{ 
	int temp;
	temp=a;
	a=b;
	b=temp;
}
bool upperstring(const string &s)
{ 
	for(auto iter=s.begin();iter!=s.end();++iter)
	{
		if(isupper(*iter))
			return true;
	}
	return false;
}
void tolowerstring(string &s)
{ 
	for(auto &c:s)
	{ 
		if(isupper(c))
			c=tolower(c);
	}
}
void test_6_11()
{ 
	int t=5;
	cout <<"before reset: "<<t<<endl;
	reset(t);
	cout <<"after reset: "<<t<<endl;
}
void test_6_12()
{ 
	int i=5,j=6;
	cout<<" before swap :  i=  "<<i<<", "<<"j=  "<<j<<endl;
	compare(&i,&j);
	cout<<" after compare: i= "<<i<<", "<<"j=  "<<j<<endl;
	swap(i,j);
	cout<<" after swap: i= "<<i<<", "<<"j= "<<j<<endl;
} 
void test_6_17()
{
	string s="i am zyL from MyFls";
	cout<<upperstring(s)<<endl;
	tolowerstring(s);
	cout<<s<<endl; 
}
int main()
{ 
	test_6_11();
	test_6_12();
	test_6_17();
	return 0;
}
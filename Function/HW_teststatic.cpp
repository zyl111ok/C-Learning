#include "HW_static.cc"
#include <iostream>
using namespace std;
using namespace zyl;
/**void test6_7()
{ 
	cout<<" haha i write it deliberately"<<endl;
}*/
int main()
{ 
	for(size_t i=0;i<5;++i)
		cout <<zyl::test6_7()<<" ";
	cout<<endl;
	for(size_t i=0;i<5;++i)
		cout<<zyl::count_add(i)<<" ";
	cout<<endl;
	for(size_t i=0;i<5;i++)
		cout<<zyl::testcompare()<<" ";
	return 0;
}
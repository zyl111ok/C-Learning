#include <iostream>
using namespace std;
/**
*测试静态局部变量的作用
*/
int test6_7()
{ 
	static size_t ctr=0;
	return ++ctr;
}
/**
*与上面的函数形成对比
*/
int testcompare()
{ 
	size_t ctr=0;
	return ++ctr;
}
size_t count_add(int n)
{ 
	static size_t ctr=0;
	ctr+=n;
	return ctr;
}
int main()
{ 
	for(size_t i=0;i<5;++i)
		cout <<test6_7()<<" ";
	cout<<endl;
	for(size_t i=0;i<5;++i)
		cout<<count_add(i)<<" ";
	cout<<endl;
	for(size_t i=0;i<5;i++)
		cout<<testcompare()<<" ";
	return 0;
}
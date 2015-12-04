#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	void testInitialize();
	void testForeach();
	//testInitialize();
	testForeach();
	return 0;
}
/**
*测试数组初始化
*/
void testInitialize()
{ 
	constexpr unsigned sz=10;
	int size;
	//用常量表达式初始化数组
	string test[sz]={"Hi","I'm","a","student","in","mianyang","foreign","language","school","!"};
	//运行时报错:size不是常量表达式
	//int test_intarray[size];
	cout<<"test: "<<test<<"; *test: "<<*test<<endl;
	string (*ptr)[sz]=&test;
	cout<<"*(ptr[0]): "<<*(ptr[0])<<"; ptr[0]: "<<ptr[0]<<endl;
	auto *pt=&test;
	string (&pt1)[sz]=test;
	cout<<pt[0]<<" "<<pt1<<endl;

}
/**
*测试数组在Foreach循环中的作用
*/
void testForeach()
{ 
	constexpr unsigned sz=10;
	string test[sz]={"Hi","I'm","a","student","in","mianyang","foreign","language","school","!"};
	for(string s:test)
		cout<<s<<" ";
	cout<<endl;
}
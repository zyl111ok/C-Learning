#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;
int main()
{ 
	void test4_2_4();
	void testfunctionturn();
	void testoddoreven();
	void testoverflow(int x);
	void test4_10();
	void test4_11();
	void test4_20();
	void test4_21();
	//test4_2_4();
	//testfunctionturn();
	//testoddoreven();
	//testoverflow(56);
	//test4_10();
	//test4_11();
	//test4_20();
	test4_21();
	return 0;
}
/**
*C++primer 练习4.4
*/
void test4_2_4()
{ 
	cout<< 12/3*4+5*15+24%4/2 <<endl;
}
int f1()
{ 
	cout<< "f1() ececuted" <<endl;
	return 6;
}
int f2()
{ 
	cout<< "f2() executed"<<endl;
	return 5;
}
/**
*判断一个数是奇数还是偶数
*/
string oddoreven(int param)
{ 
	if(param%2==0)
		return "even";
	else
		return "odd";
}
/**
*测试求值顺序
*/
void testfunctionturn()
{ 
	int i=f1()*f2();
	cout << "i: "<<i<<endl;
}
/**
*奇偶判断测试
*/
void testoddoreven()
{ 
	cout<<oddoreven(6)<<endl;
	cout<<oddoreven(5)<<endl;
}
/**
*溢出测试
*/
void testoverflow(int x)
{
	cout<<typeid((x/1000)).name()<<endl;
	short j=32770;
	cout<<j<<endl;
	int o=8.2/7.8;
	cout<<o<<endl;
}
/**
*4.10
*/
void test4_10()
{ 
	int i; 
	while((cin>>i) && (i!=42))
		cout<<i<<endl;
}
/**
*测试四个值的关系
*/
bool testfourvalue(int a,int b,int c,int d)
{ 
	if(a>b&&b>c&&c>d)
		return true;
	else
		return false;
}
/**
*4.11练习
*/
void test4_11()
{ 
	cout<<testfourvalue(4,3,2,1)<<endl;
	cout<<testfourvalue(3,6,4,2)<<endl;
}
/**
*测试运算符的优先级以及合法性
*/
void test4_20()
{ 
	vector<string> vec{"abcd","deffg","hijiod","lmniopd"};
	vector<string> :: iterator iter=vec.begin();
	cout<<iter++->size()<<endl;
	cout<<*iter<<endl;
}
bool isodd(int x)
{ 
	return (x%2!=0)?  true :  false;
}
/**
*使用条件运算符从vector<int>中找到哪些元素的值是奇数，然后将这些奇数翻倍
*/
void test4_21()
{ 
	vector<int> vec{1,2,3,4,5,6,7,8,9};
	for(auto it=vec.begin();it!=vec.end();++it)
	{
		if(isodd(*it))
			*it *=2;
	}
	for(auto i:vec) cout<<i<<" ";
}
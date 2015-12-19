#include <iostream>
using namespace std;
int main()
{
	void test4_36();
	test4_36();
	return 0; 
}
/**
*C++Primer4_36节练习
*/
void test4_36()
{ 
	int i=6;
	double d=3.7;
	i*=d;
	cout<<" before cast: "<<i<<endl;
	i=6;
	i*=static_cast<int>(d);
	cout<<" after cast: "<<i<<endl;
	int expr;
}
/**
*C++Primer 4_37练习
*/
void test_4_37()
{ 
	int i;double d;char *pc;void * pv;
	pc=static_cast <char*>(pv);
}
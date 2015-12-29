#include <iostream>
#include <vector>
using namespace std;
int fun(const int,const int){return 0;}
int add(const int a,const int b){return a+b;}
int reduce(const int a,const int b){return a-b;}
int multiply(const int a,const int b){return a*b;}
int divide(const int a,const int b){return a/b;}
typedef decltype(fun) *F;
int main()
{	
	int (*p)(const int,const int);
	vector<decltype(p)> a={add,reduce,multiply,divide};
	for(auto fun:a)
		cout<<fun(20,5)<<" ";
	return 0;
}
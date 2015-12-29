#define NDEBUG
#include <iostream>
#include <cassert>
#include <vector>
#define SIZE 4
#define square(x) x*x

using namespace std;
using Iter=vector<int>::const_iterator;
void print(Iter first,Iter last)
{ 
	if(first!=last)
	{
		cout<<*first<<" "<<endl;
		cout<<__func__<<" "<<__TIME__<<endl;
		print(++first,last);
	}
}
void test6_47()
{ 
	vector<int> a={1,2,3,4,5,6,7,8};
	print(a.cbegin(),a.cend());
}
int main()
{ 
	string s="abc";
	assert(square(s.size())>SIZE);
	//the program shutdown with error
	if(square(s.size())>SIZE)
	{
		#ifdef NDEBUG
			cerr<<__func__<<" Error: "<<__FILE__<<" at line "<<__LINE__<<endl; 
		#endif
	}
	cout<<"too long"<<endl;
	test6_47();
	return 0;
}
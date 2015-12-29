#include <iostream>
using namespace std;
/**
*计算可变参数列表的和
*/
int suminitializer(initializer_list<int> const& il)
{ 
	int sum=0;
	for(auto iter=il.begin();iter!=il.end();++iter)
	{
		sum+=*iter; 
	}
	return sum;
}
void test6_27()
{ 
	cout<<suminitializer({1,3,5,7,9})<<endl;
}
int main(int argc, char const *argv[])
{
	test6_27();
	return 0;
}
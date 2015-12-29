#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
*当程序没有编写健壮的返回逻辑的时候，观察编译器的执行情况
*/
bool str_subrange(const string &str1,const string &str2)
{ 
	if(str1.size()==str2.size())
		return str1==str2;
	auto size=(str1.size()<str2.size())?str1.size() : str2.size();
	for(decltype(size) i=0;i!=size;++i){ 
		if(str1[i]!=str2[i])
			return false;
	}
}
/**
*测试返回局部对象的引用指针
*/
const string& mainip()
{
	string ret;
	if(!ret.empty())
		return ret;
	else
		return "empty";
}
string& compare()
{ 
	 string* ret=new string;
	 *ret="good"; 
	string &refer=*ret;
	return refer;
}
/**
*递归输出vector中的元素
*/
void print(vector<int> a,int n)
{ 
	if(n>0)
	{ 
		cout<<a[a.size()-n]<<" ";
		print(a,--n);
	}
}
/**
*cpp primer pratice
*/
void test6_33()
{ 
	vector<int> a{1,2,3,4,5,6,7};
	print(a,a.size());
}
string (&function(string (&arrstr)[5]))[5]
{ 
	return arrstr;
}
int main(int argc, char const *argv[])
{
	//cout<<str_subrange("abcdef","abcd")<<endl;
	//cout<<compare()<<endl;
	//test6_33();
	string s[5]={"abc","bcd","cde","def","efg"};
	cout<<function(s)[2]<<endl;
	return 0;
}
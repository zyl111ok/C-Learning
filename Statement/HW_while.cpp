#include <iostream>
#include <string>
#include <vector>
using namespace std;
void test5_14()
{ 
	vector<string> vec={"shit","dick","fuck","fuck","fuck","fuck","shit","dick","dick","dick","fuck"};
	int maxcount=1;
	int tempcount=1;
	auto iter=vec.begin();
	do
	{
		string index=*iter;
		++iter;
		if(iter==vec.end())
			break;
		string next=*iter;
		if(index!=next)
			tempcount=1; 
		else
		{
			tempcount++;
			if(tempcount>=maxcount)
				maxcount=tempcount;
		}
	}while(true);
	cout<<maxcount<<endl;
}
/**
*检查一个vector是否是另一个的前缀
*/
bool isHead(vector<int> v1,vector<int> v2)
{ 
	vector<int> smaller;
	vector<int> larger;
	auto sz=v1.size()<v2.size()?v1.size():v2.size();
	if(v1.size()<v2.size())
	{
		smaller=v1;
		larger=v2;
	}
	else
	{ 
		smaller=v2;
		larger=v1;
	}
	for(auto i=0;i<sz;++i)
	{
		if(smaller[i]!=larger[i])
			return false;
	}
	return true;
}
void test5_17()
{ 
	vector<int> v1={2,4,6,9,7,10,5,19,21};
	vector<int> v2={2,4,6,9};
	if(isHead(v1,v2))
		cout<<"one is the head of another"<<endl;
	else
		cout<<"one is not the head of another"<<endl;
}
void test5_19()
{ 
	string rsp;
	do{ 
		cout<<"please enter two values:"<<endl;
		string str1,str2;
		cin>>str1>>str2;
		string result=str1.size()<str2.size()?str1:str2;
		cout<<"the result is: "<<result<<endl;
		cout<<"you want more? (y/n)"<<endl;
		cin>>rsp;
	}while(!rsp.empty() && rsp[0]!='n');
}
int main()
{ 
	//test5_14();
	//test5_17();
	test5_19();
	return 0;
}
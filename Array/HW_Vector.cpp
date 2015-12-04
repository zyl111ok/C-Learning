#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{ 
	void outputvector();
	void testuppercase();
	void testnextsum();
	void testpairsum();
	outputvector();
	//testuppercase();
	//testnextsum();
	//testpairsum();
	return 0;
}
/**
*输出元素类型为int的vector长度和内容
*/
void printvectorInt(vector<int> v)
{ 
	cout<<"length :"<<v.size()<<endl;
	for(auto it=v.begin();it!=v.end();it++)
	{ 
		cout<<(*it)<<" ";
	}
	cout<<endl;
}
/**
*输出元素类型为string的vector的长度和内容
*/
void printvectorString(vector<string> v)
{ 
	cout<<"length :"<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{ 
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
/**
*输出vector中的内容
*/
void outputvector()
{ 
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v5{10,42};
	vector<int> v4{10};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};
	vector<string> v8(10,"hi");
	cout<<"print v1:"<<endl;
	printvectorInt(v1);
	cout<<"print v2:"<<endl;
	printvectorInt(v2);
	cout<<"print v3:"<<endl;
	printvectorInt(v3);
	cout<<"print v4:"<<endl;
	printvectorInt(v4);
	cout<<"print v5:"<<endl;
	printvectorInt(v5);
	cout<<"print v6:"<<endl;
	printvectorString(v6);
	cout<<"print v7:"<<endl;
	printvectorString(v7);
	cout<<"print v8:"<<endl;
	printvectorString(v8);
}
/**
*将vector内的字符串变为大写形式
*/
void testuppercase()
{ 
	string word;
	vector<string> v;
	while(cin>>word)
		v.push_back(word);
	for(string s:v)
	{
		for(char &c:s)
			c=toupper(c);
		cout<<s<<endl; 
	}
}
/**
*计算相邻的和
*/
void testnextsum()
{ 
	vector<int> v;
	vector<int> final;
	for(int i=0;i<97;i++)
		v.push_back(i);
	for(int i=0;i<v.size()-1;i++)
		final.push_back(v[i]+v[i+1]);
	for(int output:final)
	{
		cout<<output;
		cout<<"    ";
	}
	cout<<endl;
}
/**
*计算相对项和
*/
void testpairsum()
{ 
	vector<int> v;
	vector<int> final;
	for(int i=0;i<97;i++)
		v.push_back(rand()%97);
	if(v.size()%2==0)
	{
		for(int i=0;i<v.size()/2;i++)
			final.push_back(v[i]+v[v.size()-i-1]);
	}
	else
	{ 
		for(int i=0;i<v.size()/2;i++)
			final.push_back(v[i]+v[v.size()-i-1]);
		final.push_back(v[(v.size()-1)/2]);
	}
	for(int output:v)
	{
		cout<<output<<" "; 
	}
	cout<<endl;
	for(int output:final)
	{
		cout<<output<<" ; "; 
	}
	cout<<endl;
}
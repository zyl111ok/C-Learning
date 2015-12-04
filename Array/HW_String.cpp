#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{ 
	void testtrim();
	void teststring();
	void testsocket();
	void testforeach();
	void testridcomma();
	//testtrim();
	//teststring();
	//testsocket();
	//testforeach();
	testridcomma();
	return 0;
}

/**
*自定义字符串分割函数
*/
string* trim(string s)
{ 
	vector<string> v;
	for(int i=0;i<s.size();)
	{ 
		int start=i;
		int work=start;
		while(!isspace(s[work])&&work!=s.size())
		{
			work++;
		}
		int end=work-1;
		i=work+1;
		string temp="";
		//将工作指针重置
		work=start;
		for(int j=0;j<=end-start;j++)
		{
			temp=temp+s[work++];
		}
		v.push_back(temp);
	}
	int sz=s.end()-s.begin();
	//动态申请内存，数组不是类型，不能直接返回
	string *temp=new string[sz];
	for(int i=0;i<v.size();i++)
		temp[i]=v[i];
	temp[v.size()]=" ";
	return temp;
}
/**
*比较两个字符串，输出较大的
*/
string outputMax(string s1,string s2)
{ 
	if(s1!=s2)
	{ 
		if(s1>s2)
			return s1;
		else
			return s2;
	}
	else
		return "two string equal!";
}

/**
*比较两个字符串，输出较长的
*/
string outputLong(string s1,string s2)
{ 
	auto sz_s1=s1.size();
	auto sz_s2=s2.size();
	if(sz_s1!=sz_s2)
	{ 
		if(sz_s1>sz_s2)
			return s1;
		else
			return s2;
	}
	else
		return "equal length!";
}

/** 
*测试模块:测试字符串分割
*/
void testtrim()
{ 
	string* trim(string s);
	string param="hello hi weo reji";
	string* s=trim(param);
	while((*s)!=" ")
	{ 
		cout<<*s<<" ";
		s++;
	}
}

/**
*字符串比较测试模块
*/
void teststring()
{ 
	string s1="zyl is a coword!";
	string s2="abc isn't an exerciser";
	string s3="bbc is a student";
	cout<<outputMax(s1,s2)<<endl;
	cout<<outputMax(s1,s1)<<endl;
	cout<<outputLong(s1,s2)<<endl;
	cout<<outputLong(s1,s3)<<endl;
}

/**
*字符串拼接函数
*/
void testsocket()
{ 
	string final;
	string word;
	while(cin>>word)
	{
		final+=word+" ";
	}
	cout<<final<<endl;
}
/**
*用范围for将string中的每个字母用‘X’代替
*/
void testforeach()
{ 
	string s("mnjionjklngfjia");
	/*
	for(char &c:s)
		c='X';
	*/
	/*
	for(int i=0;i<s.size();i++)
		s[i]='X';
	*/
	int i=0;
	while(i<s.size())
	{ 
		s[i]='X';
		i++;
	}
	cout<<s<<endl;
}

/**
*测试去逗号
*/
void testridcomma()
{ 
	string ridcomma(string s);
	cout <<ridcomma("sfs,fsa.fdasf,f")<<endl;
}

/**
*去除标点符号
*/
string ridcomma(string s)
{ 
	int count=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==','||s[i]=='.')
		{
			s[i]='#';
			count++; 
		}
	}
	string final="";
	int i=0;
	int length=s.end()-s.begin();
	for(int j=0;j<length-count;j++)
	{
		if(s[i]=='#')
		{ 
			i=i+1;
		}
		else
		{ 
			final=final+s[i++];
		}
	}
	return final;
}
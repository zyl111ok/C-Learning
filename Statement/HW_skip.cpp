#include <iostream>
#include <string>
#include <vector>
using namespace std;
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
void test5_20()
{
	string param="shit dick fuck shit shit dick Fuck Fuck haha";
	string* s=trim(param);
	string repeatword=" ";
	while((*s)!=" ")
	{ 
		string temp=*s;
		++s;
		if(*s==" ")
			break;
		else if(*s==temp)
		{
			//使找到的首字母必须大写
			if(islower(temp[0]))
				continue;
			repeatword=*s;
			break;
		}
	} 
	if(repeatword!=" ")
		cout<<"repeatword: "<<repeatword<<endl;
} 
int main()
{ 
	test5_20();
	return 0;
}
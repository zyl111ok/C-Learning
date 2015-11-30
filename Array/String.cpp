#include <iostream>
#include <string>
using std:: cout;using std:: string;
using std:: cin;using std:: endl;
int main() 
{ 
	void getLine();
	void testAdd();
	void testStringChar();
	//getLine();
	//testAdd();
	testStringChar();
	return 0;
}
/**
*测试getLine()函数用法模块
**/
void getLine()
{ 
	string line;
	while(getline(cin,line))
	{
		//判断是否为空函数
		if(!line.empty())
			cout << " executed  "<<line <<endl;
		//判断字符串大小函数
		if(line.size()>30)
			cout << line <<" "<<line.size()<<endl;
	}

}
/**
*测试string相加模块
**/
void testAdd()
{ 
	string s1="hello";
	string s2=s1+" fuck";
	string s3="I "+s2;
	//编译器报错:c++语言中的字符串字面值并不是标准类库的string对象
	//string s3=" diaw "+ " foreignal ";
	cout<< s1 <<endl;
	cout<< s2 <<endl;
	cout<< s3 <<endl;
}
/**
*处理string中的字符
*/
void testStringChar()
{ 
	string s="abcdefgh";
	//返回string :: size_type 类型
	string :: size_type length=s.size();
	for (int i=0;i<length;i++)
	{
		char &c =s[i];
		//大小写转换 
		c=toupper(c);
		cout << c <<" ";
	}
	cout <<endl;
}
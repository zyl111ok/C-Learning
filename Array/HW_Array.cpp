#include <iostream>
#include <vector>
#include <string>
using namespace std;
//该数组作为全局变量
unsigned score[11];
int main()
{ 
	void testarray();
	void testInitialize();
	void testArrayPointer();
	void testerofequal();
	//testarray();
	//testInitialize();
	//testArrayPointer();
	testerofequal();
	return 0;
}
/**
*输入一组数据，令每个元素的值都是其下标值
*/
void testarray()
{ 
	int array[10];
	for(auto i=0;i<10;++i) array[i]=i;
	for(auto i: array)cout<< i<<" ";
	cout<<endl;
	vector<int> v;
	int array2[10];
	for(auto i=0;i<10;++i) 
	{
		v.push_back(array[i]);
		array2[i]=v[i];
	}
	vector<int> v2(v);
	for(auto i:v2)cout<<i<<" ";
}
/**
*测试数组未初始化的结果
*/
void testInitialize()
{ 
	unsigned scores[11];
	/*
	for(unsigned grade;cin>>grade;)
		if(grade<=100)
			++scores[grade/10];
	*/
	for(auto i:scores)cout <<i <<" ";
	cout<<endl;
	for(auto i:score)cout <<i<<" ";
}
/**
*用指针修改数组的值
*/
void testArrayPointer()
{ 
	const int size=10;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	for(auto i:a)cout<<i<<" ";
	cout<<endl;
	for(auto ptr=a;ptr!=a+size;++ptr)
		(*ptr)=0;
	for(auto i:a)cout<<i<<" ";
}
/**
*用来比较两个数组是否相等
*/
bool arrayequal(int* const begina, int* const beginb,int* const enda,int* const endb)
{ 
	
	if((enda-begina)!=(endb-beginb))
		return false;
	else
	{ 
		for(int *i=begina,*j=beginb;(i!=enda)&&(j!=endb);++i,++j)
		{
			if(*i!=*j) 
				return false;
		}
		return true;
	}
}
/**
*用来比较两个vector是否相等
*/
bool vectorequal(vector<int> vec1,vector<int> vec2)
{ 
	if(vec1==vec2)
		return true;
	else
		return false;
}
/**
*用来测试对象相等的函数
*/
void testerofequal()
{ 
	int a[5]={1,2,3,4,5};
	int b[5]={1,2,3,4,5};
	int c[6]={1,2,3,4,5,6};
	int d[5]={1,2,3,6,5};
	cout<<" a and b: "<<arrayequal(begin(a),begin(b),end(a),end(b))<<endl;
	cout<<" a and c: "<<arrayequal(begin(a),begin(c),end(a),end(c))<<endl;
	cout<<" a and d: "<<arrayequal(begin(a),begin(d),end(a),end(d))<<endl;
}

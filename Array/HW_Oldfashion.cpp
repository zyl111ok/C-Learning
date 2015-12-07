#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	void test3_41();
	void test3_43();
	//test3_41();
	test3_43();
	return 0;
}
/**
*C++primer 3_41练习
*/
void test3_41()
{ 
	int int_arr[]={0,1,2,3,4,5}; 
	vector<int> v(begin(int_arr),end(int_arr));
	int copy[6]={};
	for(auto i=0;i<6;++i)
		copy[i]=v[i];
	for(auto i:copy)
		cout<< i <<" ";
}
/**
*C++primer 3_43练习
*/
void test3_43()
{ 
	int ia[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
	for(int (&row)[4] :ia)
		for(int &col:row)
			cout<<col<<" ";
	cout<<endl;
	for(int i=0;i<3;++i)
		for(int j=0;j<4;++j)
			cout<<ia[i][j]<<" ";
	cout<<endl;
	for(int (*row)[4]=ia;row!=ia+3;++row)
		for(int *col=*row;col!=*row+4;++col)
			cout<<*col<<" ";
}
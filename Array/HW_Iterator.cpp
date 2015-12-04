#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
	void testIterator();
	testIterator();
	return 0;
}
void testIterator()
{ 
	vector<int> v;
	for(int i=0;i<10;i++)
		v.push_back(rand()%10);
	for(int output:v)
	{ 
		cout<<output<<" ";
	}
	cout<<endl;
	for(auto it=v.begin();it!=v.end();it++)
	{ 
		(*it)=(*it)*2;
	}
	for(int output:v)
		cout<<output<<" ";
	cout<<endl;
}
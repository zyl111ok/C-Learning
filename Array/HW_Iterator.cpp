#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
	void testIterator();
	void testItScore();
	//testIterator();
	//testItScore();
	string s="fundamental";
	cout<<s.size()<<endl;
	return 0;
}
/**
*用迭代器修改容器值
*/
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
/**
*用迭代器改写统计分数段函数
*/
void testItScore()
{ 
	vector<unsigned> scores(11,0);
	for(unsigned grade;cin>>grade;)
	{ 
		if(grade<=100)
		{ 
			++*(scores.begin()+grade/10);
		}
	}
	for (unsigned amount:scores)
	{ 
		cout<<amount<<" ";
	}
}
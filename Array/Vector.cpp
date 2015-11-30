#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{ 
	void testpushBack();
	void testScore();
	testpushBack();
	//testScore();
}
/**
*测试 vector的 pushback方法添加元素
*/
void testpushBack()
{ 
	string word;
	vector<string> text;
	while(cin>>word)
		text.push_back(word);
	for(string s:text)
		cout <<s<<" ";
	cout<<endl;
}
/**
*统计分数段的数量
*/
void testScore()
{ 
	vector<int> scores(11,0);
	int grade;
	while(cin>>grade)
	{ 
		if(grade<=100)
			++scores[grade/10];
	}
	for(int i=0;i<11;i++)
		cout<<scores[i]<<" ";
	cout<<endl;
}
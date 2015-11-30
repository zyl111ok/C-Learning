#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{ 
	void testiterrun();
	int binSearch();
	//testiterrun();
	int temp=binSearch();
	cout <<temp<< " is the target item"<<endl;
	return 0;
}
/**
*遍历迭代器的测试方法
*/
void testiterrun()
{ 
	string s1="hello world";
	cout<<*(s1.begin())<<" "<<*(s1.end())<<endl;
	for(auto it=s1.begin();it!=s1.end()&&!isspace(*it);++it)
	{	
		*it=toupper(*it);
		cout <<*it<<" ";
	}
}
/**
*二分查找法的测试方法
*@ return 返回元素的位置
*/
int binSearch()
{ 
	int word,sought;
	vector<int> text;
	while(cin>>word)
	{
		if(getchar()=='\n')
			break;
		text.push_back(word);
	}
	cout<<"please input sought:"<<endl;
	cin>>sought;
	auto beg=text.begin(),end=text.end();
	auto mid=text.begin()+(end-beg)/2;
	while(mid!=end && *mid!=sought)
	{
		if(sought<*mid)
			end=mid;
		else
			beg=mid+1;
		mid=beg+(end-beg)/2;
	}
	if(*mid==*end)
	{
		cout<<"the enum is not in our set"<<endl;
		return -1;
	}
	else
		return mid-text.begin()+1;

}
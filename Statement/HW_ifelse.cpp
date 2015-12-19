#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{ 
	void test5_5();
	test5_5();
	return 0;
} 
string changescore(int grade)
{ 
	string final="";
	const vector<string>score={"F","D","C","B","A","A++"};
	if(grade<60)
		final=score[0];
	else
	{
		final=score[grade/10-5];
		final+=grade%10>7? "+" : grade%10<3 ? grade!=100? "-":"" : "";
	}
	return final;
}
void test5_5()
{ 
	int grade;
	cout<<"please input grade!"<<endl;
	cin>>grade;
	cout<<"final score is : "<<changescore(grade)<<endl;
}
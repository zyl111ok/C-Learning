#include <iostream>
using namespace std;
/**
*5.9练习
*/
void test5_9()
{ 
	char c;
	int count=0;
	while(cin>>c)
	{
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
			count++; 
	}
	cout<<count<<endl;
}
int main()
{
	test5_9();
	return 0; 
} 
#include <iostream>
#include <cstring>
using namespace std;
int main()
{ 
	void tester();
	tester();
	return 0;
}
void tester()
{ 
	const char ca[]={'h','e','l','l','o','e','r','u','h'};
	const char *cp=ca;
	/*while(*cp){
		cout<<*cp<<" ";
		++cp;
	}*/
	
	char s1[]="zyl is stupid";
	char s2[]="zyl is a good girl";
	char *s3="zyl is stupid";
	cout << strcmp(s1,s2)<<endl;
	cout << strcmp(s1,s3)<<endl;
	const int size=strlen(s1)+strlen(" ")+strlen(s2)+1;
	char s4[size];
	strcpy(s4,s1);
	strcat(s4," ");
	strcat(s4,s2);
	cout<< s4<<endl;
}
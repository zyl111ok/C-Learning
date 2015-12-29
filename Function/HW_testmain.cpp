#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string final="";
	for(auto i=0;i<argc;++i)
		final+=argv[i];
	cout<<final<<endl;
	return 0;
}
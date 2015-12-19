#include <iostream>
#include <stdexcept>
using namespace std;
/**
*C++ primer 5_23练习
*/
void test5_23()
{ 
	int i,j;
	string rsp="yes";
	while(rsp[0]!='n'){
		try{
			cin>>i>>j;
			if(j==0)
				throw runtime_error("divisor must not be 0");
			cout<<i/j<<endl;
		}catch(runtime_error err){ 
			cout<<err.what()<<endl;
		}
		cout<<"want more (y/n) ?"<<endl;
		cin>>rsp;
	}
}
int main()
{ 
	test5_23();
	return 0;
}
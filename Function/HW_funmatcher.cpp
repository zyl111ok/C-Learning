#include <iostream>
using namespace std;
void f(double,double,double){cout<<"f(int,double,double) executed"<<endl;}
void f(double,int,int){cout<<"f(double,int,int) executed"<<endl;}
void f(int,int,double){cout<<"f(int,int,double) executed"<<endl;}
int main(int argc, char const *argv[])
{
	f(5.7,1.2,3.8);
	return 0;
}
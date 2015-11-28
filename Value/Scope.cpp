# include <iostream>
int reused=42;
int main()
{ 
	int used=0;
	//依次输出全局变量和局部变量
	std::cout<<reused<<"  ; " <<used<<std :: endl;
	int reused=0;
	std::cout<<reused<<"  ; "<<used<<std :: endl;
	//用作用域限定符显式访问全局变量
	std::cout<<::reused<<" ; "<<used<<std :: endl;
	return 0;
}
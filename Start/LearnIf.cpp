#include <iostream>
int main()
{ 
	int countval=0;
	int val=0;
	if(std::cin>>countval)
	{
		int count=1;
		while(std:: cin>>val)
		{
			if(val==countval)
			++count;
			else
			{
				//统计次数
				std::cout<<countval<<"occurs "<<count<<""<<std:: endl;
				countval=val;
				count=1; 
			} 
		}
		std::cout<<countval<<" occurs "<<count<<"times"<<std::endl;
	}
	return 0;
}
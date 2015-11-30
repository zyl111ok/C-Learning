#include <iostream>
#include <string>
#include "Sales_data.h"
int main()
{ 
	using namespace std;
	//定义两个对象
	Sales_data data1,data2;
	double price=0.0;//书的单价
	//读入第一笔交易
	cin>>data1.bookNo>>data1.units_sold>>price;
	//计算销售收入
	data1.revenue=data1.units_sold*price;
	//读入第二笔交易
	cin>>data2.bookNo>>data2.units_sold>>price;
	//计算销售收入
	data2.revenue=data2.units_sold*price;
	//判断编号是否相同，如果相同输出信息，如果不同报错
	if(data1.bookNo==data2.bookNo)
	{
		unsigned totalCnt=data1.units_sold+data2.units_sold;
		double totalRevenue=data1.revenue+data2.revenue;
		//输出编号、总销售量、总销售额、平均价格
		cout<<data1.bookNo  <<" "<<totalCnt<<" "<<totalRevenue<< " ";
		if(totalCnt!=0)
			cout<<totalRevenue/totalCnt<<endl;
		else
			cout<<"(no sales)"<<endl; 
		return 0;
	}

	else
	{ 
	 	cerr <<"data must be refer to the same bookNo"<<endl;
	 	return -1;
	}
}
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string.h>
using namespace std;
class Computer
{
	public:
		void setBrand(char *brand)
		{
			strcpy(_brand, brand);
		}
		void setPrice(float fprice)
		{
			_fprice = fprice;
		}
		void print()
		{
			cout << "品牌：" << _brand << endl;
			cout << "价格：" << _fprice << endl;
		}
	private:
		 char _brand[20];
		 float _fprice;  //前缀加m表示类的成员变量 或者写成 price_m
	
};

int main(void)
{
	Computer pc1;  //类实例化
	pc1.setPrice(4000);
	pc1.setBrand("Thinkpad");
	pc1.print();
}

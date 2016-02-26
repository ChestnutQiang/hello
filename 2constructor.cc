#include<iostream>
#include<cstdio>
#include<cstring>
#include<string.h>
using namespace std;
class Computer
{
	public://对外提供接口
		Computer() //构造函数可以重载
		{
			strcpy(_brand, "lenovo");
			_fprice = 5000;
			cout << "品牌：" << _brand << endl;
			cout << "价格: " << _fprice << endl;
		}
		Computer(const char * brand, const float fprice)
		{
			strcpy(_brand, brand);	
			_fprice = fprice;

		}
		void setBrand(char *brand);
		void setPrice(float fprice);
		void print();
	private:
		 char _brand[20];
		 float _fprice;  //前缀加m表示类的成员变量 或者写成 price_m
	
};

void Computer::setBrand(char *brand)
{
	strcpy(_brand, brand);	
}
void  Computer::setPrice(float fprice)
{
	_fprice = fprice;
}
void  Computer::print()
{
	cout << "品牌：" << _brand << endl;
	cout << "价格: " << _fprice << endl;
}
int main(void)
{
	Computer pc1;  //类实例化 调用默认的构造函数
	
//	pc1.setPrice(4000);
//	pc1.setBrand("Thinkpad");
//	pc1.print();
	Computer pc2("apple",8000);
	pc2.print();
}

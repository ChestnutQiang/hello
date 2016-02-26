#include<iostream>

using namespace std;

class Point
{
	public:
		Point():_ix(0), _iy(0)
		{ 
			cout << "Point() " << endl;
			_ix = 20;
			_iy = 10;
		}
		void print()
		{
			cout << "(" << _ix << "," << _iy << ")" << endl;
		}
	private:
		int _ix;
		int _iy;
};

int main()
{
	Point p1;
	p1.print();

}

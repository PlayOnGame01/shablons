#include "shablon.h"

class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int x1, double y1)
	{
		x = x1;
		y = y1;
	}
	int GetA()const
	{
		return x;
	}
	int GetY()const
	{
		return y;
	}
};
ostream& operator<<(ostream& os, const Point& obj)//  "Правильная"  перегрузка  :)
{
	os << obj.GetA() << endl;
	os << obj.GetY() << endl;
	return os;
}
class PointB
{
	double b;
public:
	PointB()
	{
		b = 0;
	}
	PointB(double b1)
	{
		b = b1;
	}
	double GetB()const
	{
		return b;
	}
	/*B operator +(B & obj)
	{
		cout << "B + \n";
		B rez(b + obj.b);
		return rez;
	}*/

};
ostream& operator<<(ostream& os, const PointB& obj)  //  "Правильная"  перегрузка  :)
{
	os << obj.GetB() << endl;
	return os;
}

template<class T1, class T2>
class Test
{
	T1 x;
	T2 b;
public:
	Test()
	{
		x = 0;
		b = 0;
	}
	Test(T1 x1, T2 b1)
	{
		x = x1;
		b = b1;
	}
	Test operator +(Test& obj2)
	{
		cout << "Test +\n";
		Test rez(x + obj2.x, b + obj2.b);
		return rez;
	}
	void Show()
	{
		cout << "A - " << x << "B - " << b << endl;
	}
};



int main()
{
	double sum, sum2;
	//Matrix<int> obj1(3, 5);
	//obj1.Random();
	//obj1.Print();
	//cout << "\n---------------------------------------\n";
	//Matrix<int> b;
	//b = obj1;
	//b.Print();
	Test<Point, PointB> obj1(Point(1, 2.4), PointB(7.9));
	Test<Point, PointB> obj2(Point(2, 3.6), PointB(2.2));
	shablon<Point, PointB> x(5, 5);
	shablon<Point, PointB> b(3, 1);
	x.Random();
	x.Print();

	cout << x << b << endl;

	shablon<Point, PointB> sum = x + 3;
	shablon<Point, PointB> sum2 = 3 + x;

	if (sum > sum2)
	{
		cout << "sum> sum2\n";
	}

};
//#include <iostream>
//#include <cmath>
//const double Pi = 3.14;
//using namespace std;
//class point
//{
//public:
//	point();
//	int getX();
//	int getY();
//	void setX();
//	void setY();
//	double distance(point second1);
//private:
//	int x;
//	int y;
//};
//point::point()
//{
//	x = 0;
//	y = 0;
//}
//int point::getX()
//{
//	return x;
//}
//int point::getY()
//{
//	return y;
//}
//void point::setX()
//{
//	cout << " Enter value x:";
//	cin >> x;
//}
//void point::setY()
//{
//	cout << " Enter value y: ";
//	cin >> y;
//}
//double point::distance(point second1)
//{
//	return sqrt((double)(pow(getX() - second1.getX(), 2)) + (pow(getY() - second1.getY(), 2)));
//}
//int main()
//{
//	point first;
//	point second;
//	point diemA;
//	point diemB;
//	double S;
//	//cout << " First value: " << endl;
//	//first.setX();
//	//first.setY();
//	//cout << " Second value: " << endl;
//	//second.setX();
//	//second.setY();
//	//cout << " Xuat " << endl;
//	//cout << first.getX() << endl;
//	//cout << first.getY() << endl;
//	//cout << second.getX() << endl;
//	//cout << second.getY() << endl;
//	//cout << " KQ 1:" << endl;
//	//cout << first.distance(second) << endl;
//	//cout << " KQ 2:" << endl;
//	//cout << second.distance(first);
//	diemA.setX();
//	diemA.setY();
//	diemB.setX();
//	diemB.setY();
//	cout << " DK AB " << endl;
//	cout << diemA.distance(diemB) << endl;
//	cout << " S tron: ";
//	cout << (pow(diemA.distance(diemB), 2) / 4) * Pi;
//	system("pause");
//	return 0;
//}
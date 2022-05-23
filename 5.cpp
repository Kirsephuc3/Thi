//#include <iostream>
//#include<math.h>
//using namespace std;
////int S1(int n)
////{
////	if (n == 1)
////		return 1;
////	else
////		return n+ S1(n - 1) ;
////}
//int S1(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return n + S1(n - 1);
//}
//int S2(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * n + S2(n - 1);
//}
//double S3(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n > 0)
//		return 1.0/ (2 * n - 1) + S3(n - 1);
//}
//float T(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + T(n - 1);
//}
//float S4(int n)
//{
//	if (n == 1)
//		return 1;
//	return S4(n - 1) + 1.0 / T(n);
//}
////int s(int n)
////{
////	if (n == 1)
////		return 1;
////	else
////		return 2 * n;
////}
//float tong(float n)
//{
//	if (n == 0)
//		return 0;
//	if (n > 0)
//		return tong(n - 1) + 1 / (2 * n);
//}
//
//int main()
//{
//	int n;
//	cout << " Nhap so nguyen n: ";
//	cin >> n;
//	/*cout << " Tong s1= " << S1(n) << endl;
//	cout << " Tong s2= " << S2(n) << endl;
//	cout << " Tong s3= " << S3(n) << endl;*/
//	//cout << " Tong s4= " << S4(n) << endl;
//	cout << " Tong S5= " << tong(n) << endl;
//	return 0;
//}
////#include<iostream>
////using namespace std;
////int h10_2(int n)
////{
////    if (n == 0)
////        return 0;
////    h10_2(n / 2);
////    cout << n % 2;
////}
////int main()
////{
////    int n;
////    cout << "Nhap vao day so  = ";
////    cin >> n;
////    //cout << "He 10 sang he 2 : " << h10_2(n) << endl;
////    h10_2(n);
////    return 0;
////}
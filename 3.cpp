//#include <iostream>
//#include<ctime>
//#include <cstdlib>
//using namespace std;
//const int R = 10, C = 15;
//void Nhap(int a[][C], int& r, int& c)
//{
//	do
//	{
//		cout << " Nhap so hang va so cot cua ma tran: ";
//		cin >> r >> c;
//		if (r > R || c > C)
//			cout << " Nhap sai! Nhap lai: ";
//	} while (r > R || c > C);
//	for (int i = 0; i <r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << " a[" << i << "]""[" << j << "]" << " : ";
//			cin >> a[i][j];
//		}
//	}
//}
//void Xuat(int a[][C], int r, int c)
//{
//	cout << " Xuat Mang : " << endl;
//	for (int i = 0; i <r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//double Tong(int a[][C], int r, int c)
//{
//	int sum = 0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			sum += a[i][j];
//		}
//	}
//	return sum;
//}
//int Tim_MIN(int a[][C], int r, int c)
//{
//	int min = a[0][0];
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (min > a[i][j])
//				min = a[i][j];
//		}
//	}
//	return min;
//}
//int Tim_MAX(int a[][C], int r, int c)
//{
//	int max = a[0][0];
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (max < a[i][j])
//				max = a[i][j];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int a[R][C];
//	int r, c;
//	Nhap(a, r, c);
//	Xuat(a, r, c);
//	cout << " Tong cua ma tran la:" << Tong(a, r, c) << endl;
//	cout << " Gia tri nho nhat trong mang la: " << Tim_MIN(a, r, c) << endl;
//	cout << " Gia tri lon nhat trong mang la: " << Tim_MAX(a, r, c) << endl;
//	int dem = 0;
//	int vti, vtj;
//	int vti1, vtj2;
//	for (int i = 0; i < r; i++)
//		for (int j = 0; j < c; j++)
//			if (a[i][j] = Tim_MIN(a, r, c))
//			{
//				vti = i;
//				vtj = j;
//			}
//	cout << " Vi tri nho nhat o hang " << vti << " o cot " << vtj << endl;
//	system("pause");
//	return 0;
//}
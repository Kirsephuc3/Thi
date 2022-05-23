//#include <iostream>
//using namespace std;
//const int R = 10, C=10;
//void Nhap(int a[][C], int &r, int &c)
//{
//	do
//	{
//		cout << " Nhap so dong va so cot: ";
//		cin >> r >> c;
//		if (r > R || c > C)
//			cout << "Nhap sai!! Nhap lai: ";
//	} while (r> R || c > C);
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "a[" << i << "]" << "[" << j << "]" << " : ";
//			cin >> a[i][j];
//		}
//	}
//}
//void Xuat(int a[][C], int r, int c)
//{
//	cout << " Xuat Mang " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//int sumrow(int a[][C], int c, int d)
//{
//	// xet cot
//	int sum(0);
//	for (int j = 0; j < c; j++)
//		sum += a[d][j];
//	return sum;
//}
//int sumcolum(int a[][C], int r, int cot)
//{
//	int sum(0);
//	for (int i = 0; i < r; i++)
//		sum += a[i][cot];
//	return sum;
//}
//int main()
//{
//	int a[R][C];
//	int r, c;
//	int chon;
//	int d, cot;
//	int k;
//	int count = 0;
//	Nhap(a, r, c);
//	Xuat(a, r, c);
//	do
//	{
//		cout << "\t Tinh so cot hoac so dong: " << endl;
//		cout << "\t Nhap '1' de tinh cot: || Nhap '2' de tinh dong: || Nhap '3' de tim so k co trong mang hay khong: ";
//		cin >> chon;
//		switch (chon)
//		{
//			system("cls");
//		case 1:
//			cout << " Nhap so cot can tinh: ";
//			cin >> cot;
//			cout << " Tong so cot " << cot << " la: " << sumcolum(a, r, cot) << endl;
//			break;
//		case 2:
//			cout << " Nhap so dong can tinh: ";
//			cin >> d;
//			cout << " Tong so dong " << d << " la: " << sumrow(a, c, d) << endl;
//			break;
//		case 3:
//			cout << " Nhap so k can xac dinh: ";
//			cin >> k;
//			for (int i = 0; i < r; i++)
//				for (int j = 0; j < c; j++)
//					if (a[i][j] == k)
//					{
//						count++;
//						cout << " So " << k << " duoc phat hien o dong" << i << " va o cot " << j << endl;
//					}
//			if (count > 0)
//			{
//				cout << " So " << k << " Xuat hien " << count << " lan " << endl;
//			}
//			else
//				cout << " So " << k << " khong xuat hien !!!" << endl;
//			break;
//		default:
//			cout << " Nhap sai lua chon !!!" << endl;
//		}
//	} while (true);
//
//	system("pause");
//	return 0;
//}
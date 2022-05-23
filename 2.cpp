//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << " Nhap ma tran bac n: ";
//	cin >> n;
//	int a[10][10];
//	int value = n * n;
//	int maxr, maxc, minr, minc;
//	minr = minc = 0;
//	maxr = maxc = n - 1;
//	while (minr <= maxr && minc <= maxc)
//	{
//		////h1
//		//for (int i = minc; i <= maxc; i++)
//		//	a[minc][i] = value--;
//		//minr++;
//		////h2
//		//for (int i = minr; i <= maxr; i++)
//		//	a[i][maxc] = value--;
//		//maxc--;
//		////h3
//		//for (int i = maxc; i >= minc; i--)
//		//	a[maxr][i] = value--;
//		//maxr--;
//		////h4
//		//for (int i = maxr; i >= minr; i--)
//		//a[i][minc] = value--;
//		//minc++;
//		////h1
//		//for (int i = minr; i <= maxr; i++)
//		//	a[i][minr] = value--;
//		//minc++;
//		////h2
//		//for (int i = minc; i <= maxc; i++)
//		//	a[maxc][i] = value--;
//		//maxr--;
//		////h3
//		//for (int i = maxr; i >= minr; i--)
//		//	a[i][maxc] = value--;
//		//maxc--;
//		//////h4
//		//for (int i = maxc; i >= minc; i--)
//		//	a[minr][i] = value--;
//		//minr++;
//		//h1
//		/*for (int i = maxc; i >= minc; i--)
//			a[minr][i] = value--;
//		minr++;
//		for (int i = minr; i <= maxr; i++)
//			a[i][minc] = value--;
//		minc++;
//		for (int i = minc; i <= maxc; i++)
//			a[maxr][i] = value--;
//		maxr--;
//		for (int i = maxr; i >= minr; i--)
//			a[i][maxc] = value--;
//		maxc--;*/
//		//h1
//		//for (int i = minr; i <=maxr; i++)
//		//	a[i][maxc] = value--;
//		//maxc--;
//		////h2 
//		//for (int i = maxc; i >= minc; i--)
//		//	a[maxr][i] = value--;
//		//maxr--;
//		////h3
//		//for (int i = maxr; i >= minr; i--)
//		//	a[i][minc] = value--;
//		//minc++;
//		////h4
//		//for (int i = minc; i <= maxc; i++)
//		//	a[minr][i] = value--;
//		//minr++;
//		//h1
//		//for (int i = maxc; i >= minc; i--)
//		//	a[maxr][i] = value--;
//		//maxr--;
//		////h2
//		//for (int i = maxr; i >= minr; i--)
//		//	a[i][minc] = value--;
//		//minc++;
//		////h3
//		//for (int i = minc; i <= maxc; i++)
//		//	a[minr][i] = value--;
//		//minr++;
//		////h4
//		//for (int i = minr; i <= maxr; i++)
//		//	a[i][maxc] = value--;
//		//maxc--;
//		//h1
//		for (int i = maxr; i >= minr; i--)
//			a[i][maxc] = value--;
//		maxc--;
//		//h2
//		for (int i = maxc; i >= minc; i--)
//			a[minr][i] = value--;
//		minr++;
//		//h3
//		for (int i = minr; i <= maxr; i++)
//			a[i][minc] = value--;
//		minc++;
//		//h4
//		for (int i = minc; i <= maxc; i++)
//			a[maxr][i] = value--;
//		maxr--;
//			//h1
//		//for (int i = minc; i <= maxc; i++)
//		//	a[maxr][i] = value--;
//		//maxr--;
//		////h2
//		//for (int i = maxr; i >= minr; i--)
//		//	a[i][maxc] = value--;
//		//maxc--;
//		////h3
//		//for (int i = maxc; i >= minc; i--)
//		//	a[minr][i] = value--;
//		//minr++;
//		////h4
//		//for (int i = minr; i <= maxr; i++)
//		//	a[i][minc] = value--;
//		//minc++;
//}
//		cout << " Xuat ma tran: " << endl;
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < n; j++)
//					cout << a[i][j] << "\t";
//				cout << endl;
//			}
//			system("pause");
//			return 0;
//}
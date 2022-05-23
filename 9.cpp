//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//
//struct sinhvien
//{
//	string mssv;
//	string name;
//	int year;
//};
//
//int main() {
//	ofstream ofile;
//	ifstream ifile;
//	sinhvien dssv[10];
//	int count;
//	string tmpmssv;
//	/*ofile.open("BT10.txt", ios::out);
//	cout << "moi ban nhap so luong sv" << endl;
//	cin >> count;
//	sinhvien* ptr;
//	ptr = new sinhvien[count];
//	for (int i = 0; i < count; i++) {
//		cout << "nhap mssv thang thu " << i + 1 <<":";
//		cin >> ptr[i].mssv;
//		cout << "nhap ten thang thu " << i + 1 << ":";
//		cin.ignore(1);
//		getline(cin, ptr[i].name);
//		cout << "nhap nam sinh thang thu " << i + 1 << ":";
//		cin >> ptr[i].year;
//		if (i == count - 1) {
//			ofile << ptr[i].mssv << "," << ptr[i].name << "," << ptr[i].year;
//		}
//		else {
//			ofile << ptr[i].mssv << "," << ptr[i].name << "," << ptr[i].year << endl;
//		}
//	}
//	delete[] ptr;*/
//	ifile.open("BT10.txt");
//	int i = 0;
//	while (!ifile.eof())
//	{
//		getline(ifile, dssv[i].mssv, ',');
//		getline(ifile, dssv[i].name, ',');
//		ifile >> dssv[i].year;
//		ifile.ignore(1);
//		/*cout<< dssv[i].mssv << "," << dssv[i].name << "," << dssv[i].year << endl;*/
//		i++;
//	}
//	cout << "nhap mssv" << endl;
//	cin >> tmpmssv;
//	for (int j = 0; j < i; j++) {
//		if (dssv[j].mssv == tmpmssv) {
//			cout << dssv[j].mssv << "," << dssv[j].name << "," << dssv[j].year << endl;
//			break;
//		}
//	}
//	return 0;
//}
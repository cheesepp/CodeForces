////#include <iostream>
////#include <string>
////using namespace std;
////int main() {
////	string s1, s2;
////	cin >> s1 >> s2;
////	for (int i = 0; i < s1.size() && i<s2.size(); i++) {
////		if ((s1[i] == s2[i] + 32 || s1[i] == s2[i] - 32))
////			s1[i] = s2[i];
////			if ((s1[i]>s2[i]) && (s1[i] != s2[i] + 32)){
////				cout << 1;
////				break;
////			}
////			else if ((s1[i] < s2[i]) && (s1[i] != s2[i] - 32)) {
////				cout << -1;
////				break;
////			}
////	}
////	if (s1 == s2) cout << 0;
////	return 0;
////}
//#include <iostream>
//#include <cmath>
//using namespace std;
//#define N 30
//void Nhapmang(int a[], int& n) {
//    cout << "Nhap so phan tu: "; cin >> n;
//    while (n<0 && n>N) {
//        cout << "n phai >0! Yeu cau nhap lai: ";
//        cin >> n;
//    }
//    cout << "Nhap mang: ";
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//}
//void Xuatmang(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//void Timphantu(int a[], int n, int x) {
//    bool check = false;
//    for (int i = 0; i < n; i++) {
//        if (x == a[i]) {
//            check = true;
//        }
//    }
//    if (check) cout << "Co gia tri " << x << " trong mang" << endl;
//    else cout << "Khong co gia tri " << x << " trong mang" << endl;
//}
//void TaoMang(int a[], int n, int b[], int x)
//{
//    for (int i = 0; i < n; i++)
//    {
//        b[i] = abs(x - a[i]);
//    }
//}
//
//// Tìm min của mảng b
//int TimMin(int b[], int n)
//{
//    int Min = b[0];
//    for (int i = 1; i < n; i++)
//    {
//        if (b[i] < Min)
//        {
//            Min = b[i];
//        }
//    }
//    return Min;
//}
//int main()
//{
//    int a[N], b[N];
//    int x, n;
//    Nhapmang(a, n);
//    Xuatmang(a, n);
//    cout << "Nhap gia tri can thuc hien: "; cin >> x;
//    Timphantu(a, n, x);
//    TaoMang(a, n, b, x);
//    int sogan = TimMin(b, n);
//    cout << "So gan x la: " << sogan;
//    return 0;
//}
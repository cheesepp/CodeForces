//#include<iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	int x, y;
//	long long z;
//	int i = 1;
//	int t;
//	cin >> t;
//	while (t--) {
//		int count = 0;
//		cin >> x;
//		int n = x;
//		int y = x;
//		while (n != 0) {
//			int j = n % 10;
//			if (j != 0) count++;
//			n /= 10;
//		}
//		cout << count << endl;
//		while (y != 0) {
//			z = x % (long long)pow(10, i);
//			if (z == 0) {
//				y /= 10;
//				i++;
//				continue;
//			}
//			x = x - z;
//			cout << z << " ";
//			i++;
//			count++;
//			y /= 10;
//		}
//		cout << endl;
//	}
	/*int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[5];
		int count = 0;
		int m = 1;
		for (int i = 0; i < 5; i++) {
			a[i] = n % 10;
			n /= 10;
			if (a[i] != 0) {
				count++ ;
			}
		}
		cout << count << endl;
		for (int i = 0; i < 5; i++) {
			if (a[i] != 0) {
				cout << a[i] * m << " ";
			}
			m = m * 10;
		}
		cout << endl;
	}*/
//	return 0;
//}
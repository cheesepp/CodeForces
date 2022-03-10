//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		bool check = true;
//		int n;
//		cin >> n;
//		int a[50];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		for (int i = 0; i < n - 1; i++) {
//			for (int j = i + 1; j < n; j++) {
//				if (abs(a[j] - a[i]) < 1) {
//					check = true;
//				}
//				else {
//					check = false;
//					break;
//				}
//			}
//		}
//		if (check) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}
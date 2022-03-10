//#include <iostream>
//using namespace std;
//int main() {
//	int m, n;
//	cin >> m >> n;
//	int pos = -3;
//	int pos2 = -1;
//	for (int i = 0; i < m; i++) {
//		if (i % 2 == 0) {
//			for(int j=0;j<n;j++){
//				cout << "#";
//			}
//		}
//		else if (i % 2 != 0 && i - pos == 4) {
//			for (int j = 0; j < n; j++) {
//				if (j == n - 1) {
//					cout << "#";
//					break;
//				}
//				cout << ".";
//				pos = i;
//			}
//		}
//		else if (i % 2 != 0 && i - pos2 == 4) {
//			for (int j = 0; j < n; j++) {
//				if (j == 0) {
//					cout << "#";
//					continue;
//				}
//				cout << ".";
//				pos2 = i;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//bool checkPrime(int n) {
//	bool check = true;
//	if (n <= 1) return false;
//	for (int i = 2; i <= sqrt(n); i++) {
//		check = true;
//		if (n % i == 0) {
//			check = false;
//		}
//	}
//	return check;
//}
//int main() {
//	int n;
//	cin >> n;
//	int x, y;
//	for (int i = 1; i < n; i++) {
//		if (!checkPrime(i)) {
//			x = i;
//			if (!checkPrime(n - x)) {
//				y = n - x;
//				break;
//			}
//			else { continue; }
//		}
//	}
//	cout << x << " " << y;
//
//	return 0;
//#include <iostream>
//using namespace std;
//int n;
//int main() {
//    cin >> n;
//    if (n % 2 == 0) {
//        cout << n - 4 << " 4";
//    }
//    else {
//        cout << n - 9 << " 9";
//    }
//}
//}
//#include<iostream>
//using namespace std;
//bool prime(int n) {
//	bool check = true;
//	if (n <= 1) check = false;
//	for (int i = 2; i <= sqrt(n); i++) {
//		check = true;
//		if (n % i == 0) check = false;
//	}
//	return check;
//}
//int main() {
//	int n;
//	cin >> n;
//	int i = 3;
//	int dem = 0;
//	int z = n;
//	while (prime(i) == true) {
//		i++;
//		z = n - i;
//		if (prime(z)) {
//			i++;
//			continue;
//		}
//	}
//	cout << i << " " << z;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int games[30];
//	int n;
//	cin >> n;
//	int count = 0;
//	int h[100];
//	int a[100];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i] >> h[i];
//	}
//	for (int i = 0; i < n-1; i++) {
//		for (int j = i+1; j < n; j++) {
//			if (a[i] == h[j] && h[i] == a[j]) count+=2;
//			else if((a[i] == h[j] || h[i] == a[j])) count ++;
//		}
//	}
//	cout << count;
//	return 0;
//}
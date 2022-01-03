//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string s;
//	cin >> s;
//	int dem1 = 0, dem2 = 0;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z') {
//			dem1++;
//		}
//		else if (s[i] >= 'a' && s[i] <= 'z') {
//			dem2++;
//		}
//	}
//	for (int i = 0; i < s.length(); i++) {
//		if (dem1 <= dem2) {
//			if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
//		}
//		else {
//			if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
//		}	
//	}
//	cout << s;
//}
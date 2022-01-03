#include <iostream>
#include <string>
using namespace std;
int main() {
	char S[100];
	char T[4];
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> S;
		cin >> T;
     
		for (int i = 0; i < strlen(S - 1); i++) {
			for (int j = i + 1; j < strlen(S); j++) {
				if (S[i] > S[j]) {
					int temp = S[i];
					S[i] = S[j];
					S[j] = temp;
				}
			}
		}
		for (int i = strlen(S - 1); i >= 0; i--) {
			if () {
				int temp = S[i];
				S[i] = S[i - 1];
				S[i-1] = temp;
			}
		}
	}
	cout << S;
}
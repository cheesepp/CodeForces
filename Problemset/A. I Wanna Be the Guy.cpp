#include<iostream>
using namespace std;
#define m 100
int main() {
	int n;
	cin >> n;
	bool check;
	int x;
	cin >> x;
	int a[100], b[100];
	for (int i = 0; i < x; i++) {
		cin >> a[i];
	}
	int y; cin >> y;
	for (int i = 0; i < y; i++) {
		cin >> b[i];
	}
	while (n != 0) {
		for (int i = x-1, j = y-1; i >= 0 || j >= 0; i--, j--) {
			if (a[i] == n || b[j] == n) {
				check = true;
				i = a[i] == n ? i : ++i;
				j = a[j] == n ? j : ++j;
				n--;
				continue;
			}
			else {
				check = false;
				n = 0;
				break;
			}
		}
	}
	if (check) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	return 0;
}
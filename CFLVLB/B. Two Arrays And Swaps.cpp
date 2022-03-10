#include<iostream>
#include<vector>
using namespace std;
int max(vector<int> a) {
	int max = a[0];
	for (int i = 0; i < a.size(); i++) {
		if (max < a[i])max = a[i];
	}
	return max;
}
int min(vector<int> b) {
	int min = b[0];
	for (int i = 0; i < b.size(); i++) {
		if (min > b[i]) min = b[i];
	}
	return min;
}
void input(vector<int>& a, int n) {
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int sum(vector<int> a) {
	int sum = 0;
	for (int i = 0; i < a.size() / 2; i++) {
		sum += a[i];
	}
	return sum;
}
void sort(vector<int>& a){
	for (int i = 0; i < a.size() - 1; i++) {
		for (int j = i + 1; j < a.size(); j++) {
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a;
		input(a,n*2);
		while (k != 0) {
			sort(a);
			for (int i = 0; i < a.size(); i++) {
				swap(a[i], a[a.size() - 1 - i]);
				k--;
				if (k == 0) break;
			}
		}
		cout << sum(a) << '\n';
	}
	return 0;
}
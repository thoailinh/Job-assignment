#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	vector<int> thoigian(n,0) ;
	vector<int> tongthoigian(m,0);
	int x;
	for (int k = 0; k < n; k++) {
		cin >> x;
		thoigian[k] = x;
		if (k < m) tongthoigian[k] = 0;
	}
	for (int k = 0; k < n; k++) {
		cin >> x;
		tongthoigian[x] += thoigian[k];
	}
	int max = tongthoigian[0];
	for (int k = 1; k < m; k++) {
		if (max < tongthoigian[k]) max = tongthoigian[k];
	}
	cout << max << endl;
	system("pause");
	return 0;

}
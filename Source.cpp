#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> dscv;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		dscv.push_back({ x, i });
	}
	stable_sort(dscv.begin(), dscv.end());
	for (auto i : dscv)
	{
		cout << i.second;
	}
	system("pause");
	return 0;
}	
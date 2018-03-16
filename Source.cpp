#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n; int x;//khai báo số công việc
	cin >> n;
	vector<pair<int, int>> dscv;//danh sách công việc kèm theo số thứ tự
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		dscv.push_back({ x, i });
	}
	stable_sort(dscv.begin(), dscv.end());// sắp xếp danh sách công việc theo thời gian tăng dần 
	for (auto i : dscv)
	{
		cout << i.second;// xuất số thứ tự của từng máy
	}
	system("pause");
	return 0;
}	

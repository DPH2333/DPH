#include <iostream>
#include <algorithm>

#include <string>
#include <string.h>

#include <math.h>
#include <stdio.h>

#include <stack>
#include <queue>
#include <vector>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

#define int long long
#define LL long long
#define endl '\n'
#define PII pair<int, int>

using namespace std;

const int N = 50 + 10;

int32_t main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	freopen("C:\\Users\\DPH\\Documents\\Tencent Files\\2398212574\\FileRecv\\yq_in.txt", "r", stdin);
	freopen("C:\\Users\\DPH\\Documents\\Tencent Files\\2398212574\\FileRecv\\cout.txt", "w", stdout);

	string s, ss;
	int num;
	map<string, vector<pair<string, int> >, greater<string> > mp;

	while(cin >> s >> ss >> num) {
		mp[s].push_back(pair<string, int>(ss, num));
	}
	for(auto it : mp) {
		cout << it.first << '\n';
		for(auto i : it.second) {
			cout << i.first << ' ' << i.second << '\n';
		}
		cout << '\n';
	}
	return 0;
}

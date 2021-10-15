#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	string s, ss;
	
	string cmdn;
		
	if(argc == 4)
	{
		for(int i = 0; i < strlen(argv[3]); i ++ ) cmdn += argv[3][i];
	}

	string In = "C:\\Users\\DPH\\Desktop\\RJGC\\";
	string Out = "C:\\Users\\DPH\\Desktop\\RJGC\\";

	for(int i = 0; i < strlen(argv[1]); i ++ ) In += argv[1][i];
	for(int i = 0; i < strlen(argv[2]); i ++ ) Out += argv[2][i];

	freopen(In.c_str(), "r", stdin);
	freopen(Out.c_str(), "w", stdout);

	map<string, vector< pair<string, int> > > mp;

	while(cin >> s >> ss >> n)
	{
		if(argc == 4 && s == cmdn) cout << ss << "	" << n << endl;
		mp[s].emplace_back( ss, n );
	}

	if(argc == 3)
	{
		for(auto it : mp)
		{
			cout << it.first << endl;
			for(auto itt : it.second)
			{
				cout << itt.first << "	" << itt.second << endl;
			}
			cout << endl;
		}
	}

	return 0;
}

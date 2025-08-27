#include <bits/stdc++.h>
using namespace std;
int main() {
	int tt;cin>>tt;
	while(tt--)
	{
		int x,y;cin>>x>>y;
		int res=INT_MIN,cnt=0;
		for (int i=0;i<x;i++)
		{
			string s;cin>>s;
			for (int j=0;j<s.length();j++)
			{
				 if (s[j]!='.')cnt++;
			}
			if (cnt>res)
			{
				res=cnt;
				cnt=0;
			} else cnt=0;
		}
		cout<<res<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long s, d;
	while(cin>>s>>d){
		long long sum=0;
		for(int p=s;; p++){
			sum+=p;
			if(sum>=d){
				cout<<p<<endl;
				break;
			}
		}
	}
}

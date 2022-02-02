#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		bool inf = true;
		int minval = a[0];
		for (int i = 1; i < n; i++){
			if (a[i] != a[0]){
				inf = false;
				break;
			}
			minval = min(minval, a[i]);
		}
		if (inf){
			cout << "-1\n";
			continue;
		}

		sort(a.begin(), a.end());
		int ans = 0;
		for (int i = 0; i < n; i++)
			ans = gcd(ans, a[i] - minval);
		cout << ans << '\n';
}
return 0;
}
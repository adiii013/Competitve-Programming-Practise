#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
   int n;
		 cin >> n;
		 int sum = 0;
		 for (int i = 0;i < n; i++){
			 int a;
			 cin >> a;
			 sum += a;
		 }
   if(sum < n)cout << "1\n";
   else cout << sum - n << "\n";
}
return 0;
}
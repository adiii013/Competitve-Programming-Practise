#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n, m;
        cin >> n >> m;
        if(n == 1 && m == 1){
            cout << "0\n";
        }
        else if(min(n, m) == 1){
            cout << "1\n";
        }
        else cout << "2\n";
}

return 0;
}
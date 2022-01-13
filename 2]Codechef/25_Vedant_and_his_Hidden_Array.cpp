#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int, int>
#define rep(a, b) for (int i = a; i < b; i++)
#define pi pair<int, int>
#define all(a) (a).begin(), (a).end()

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        int n;cin>>n;
        int a;cin>>a;
        if(n==1){
            if(a%2==0) cout<<"EVEN"<<endl;
            else cout<<"ODD"<<endl;
        }
        else if(a%2==1){
            if(n%2==0) cout<<"EVEN"<<endl;
            else cout<<"ODD"<<endl;
        }
        else cout<<"IMPOSSIBLE"<<endl;
         
    }

    return 0;
}
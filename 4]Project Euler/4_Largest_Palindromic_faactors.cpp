#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

bool check(int n){
    int rev = 0;
    int temp = n;
    while(n>0){
        rev = rev*10+n%10;
        n = n/10;
    }
    if(rev == temp) return true;
    return false;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int min = INT_MIN;
for(int i = 100 ;i<=999;i++){
    for(int j = 100;j<=999;j++){
        if(check(i*j)){
            if((i*j)>min){
                min = i*j;
            }
        }
    }
}

cout<<min<<endl;

return 0;
}
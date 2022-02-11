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

int n = 100;
ll sum1 = n*(n+1)/2; 
ll sum2 = sum1*(2*n+1)/3;
cout<<pow(sum1,2)-sum2<<endl;

return 0;
}
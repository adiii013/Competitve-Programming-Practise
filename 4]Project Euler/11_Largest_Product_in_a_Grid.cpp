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

int len = 20;
int arr[20][20];

for(int i = 0;i<len;i++){
    for(int j = 0;j<len;j++){
        cin>>arr[i][j];
    }
}
int best =0,curr;
for(int i = 0;i<len;i++){
    for(int j = 0;j<len;j++){
        if(i+3<len){
            curr = arr[i][j] * arr[i+1][j] * arr[i+2][j]*arr[i+3][j];
            if(curr>best) best = curr;
        }
        if(j+3<len){
            curr = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
            if(curr>best) best = curr;
        }
        if(i+3<len && j+3<len){
            curr = arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3];
            if(curr>best) best = curr;
        }
        if(i+3<len && j>=3){
           curr = arr[i][j] * arr[i+1][j-1] * arr[i+2][j-2] * arr[i+3][j-3];
           if(curr>best) best = curr;
        }
    }
}
cout<<best<<endl;
return 0;
}
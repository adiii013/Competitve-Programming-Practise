#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    int arr[k];
    for (int i = 0; i < k; i++) cin >> arr[i];
    sort(arr, arr + k);
    vector<int> vec;
    int prev = 0;
    for (int j = 0; j < k; j++){
        for (int l = arr[j]; l > prev; l--){
            vec.push_back(l);
        }
        prev = arr[j];
    }
    for (auto it = vec.begin(); it != vec.end(); it++) 
    cout << *it <<" ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
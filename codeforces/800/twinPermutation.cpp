#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        cout<<n+1-temp<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
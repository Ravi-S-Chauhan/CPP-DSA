#include<iostream>

using namespace std;

void solve(){
    int n,count=0,mx = 0;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        if (temp == 0){
            count++;
        } else {
            mx = max(mx,count);
            count = 0;
        }
    }
    mx = max(mx,count);
    cout<<mx<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
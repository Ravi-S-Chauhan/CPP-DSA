#include<iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int t = 0;
    while(n--){
        int temp;
        cin>>temp;
        t += temp;
    }

    if (t&1) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
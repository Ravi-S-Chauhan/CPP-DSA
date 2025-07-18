#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;

    if (x != 1){
        cout<<"YES\n"<<n<<"\n";
        while(n--) cout<<"1 ";
    } else {
        if (k == 1){
            cout<<"NO";
        } else if (k == 2){
            if (n&1) {
                cout<<"NO";
            } else {
                cout<<"YES\n"<<(n/2)<<"\n";
                for(int i=0;i<(n/2);i++) cout<<"2 ";
            }
        } else {
            if (n&1){
                cout<<"YES\n";
                int e = n/2 - 1;
                int o = (n-2*e)/3;
                cout<<e+o<<"\n";
                for(int i=0;i<e;i++) cout<<"2 ";
                for(int i=0;i<o;i++) cout<<"3 ";
            } else {
                cout<<"YES\n"<<(n/2)<<"\n";
                for(int i=0;i<(n/2);i++) cout<<"2 ";
            }
        }
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

// https://codeforces.com/problemset/problem/1845/A - tricky one
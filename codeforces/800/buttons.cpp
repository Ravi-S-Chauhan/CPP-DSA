#include<iostream>

using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int fa = (c + 1) / 2;
    int fb = c-fa;
    a += fa; b += fb;
    if (a > b) {
        cout<<"First"<<endl;
    } else {
        cout<<"Second"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
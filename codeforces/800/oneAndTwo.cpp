#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void tc(){
    long long n, two = 0, t = 0;
    cin>>n;
    vector<long long> a(n);
    for(auto i=0;i<n;i++){
        cin>>a[i];
        if (a[i] == 2) two++;
    }

    if (two&1) {cout<<"-1\n";return;}

    for(int i=0;i<n;i++){
        if (a[i] == 2) t++;
        if (t == two/2) {cout<<i+1<<"\n"; return;}
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}
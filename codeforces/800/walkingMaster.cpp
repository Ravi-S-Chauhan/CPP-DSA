#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void tc(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b > d) {cout<<"-1\n";return;}
    int total = 0;
    total += abs(d-b);
    a += total;
    if (c > a) {cout<<"-1\n";return;}
    total += abs(c-a);
    cout<<total<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}
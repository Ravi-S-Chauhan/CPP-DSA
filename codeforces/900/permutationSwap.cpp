#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b,a%b);
}

void tc() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mn = abs(1-a[0]);
    for(int i=1;i<n;i++){
        mn = gcd(mn,abs(i+1-a[i]));
    }

    cout<<mn<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}
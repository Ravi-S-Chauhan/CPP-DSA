#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    long long n;
    cin>>n;
    int mx = 0;
    int count = 1;
    for(int i=2;i<=n;i++){
        if (n%i != 0)break;
        count++;
    }
    cout<<count<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}
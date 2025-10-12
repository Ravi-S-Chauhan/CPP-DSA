#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    long long n;
    cin>>n;
    if (n%6LL == 0 && n%4LL == 0){
        cout<<n/6LL<<" "<<n/4LL<<"\n";
    } else if (n%6LL == 0 || n%4LL == 0){
        if (n%6LL == 0){
            cout<<n/6LL<<" "<<(n+4)/4LL<<endl;
        } else {
            cout<<(n+6)/6LL<<" "<<n/4LL<<endl;
        }
    } else {
        cout<<-1<<endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}
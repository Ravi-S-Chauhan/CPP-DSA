#include<iostream>

using namespace std;

void tc(){
    int n,k;
    cin>>n>>k;

    if (n % 2 == 0 || (k % 2 == 1 && n >= k)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
}
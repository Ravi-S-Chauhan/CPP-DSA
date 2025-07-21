#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void tc(){
    long long n;
    cin>>n;
    int prev;
    cin>>prev;
    n--;
    int count = 1, total = 0, parity = prev&1;
    while(n--){
        int temp;
        cin>>temp;
        if ((temp&1) == parity){
            count++;
        } else {
            total += count-1;
            count = 1;
            parity = temp&1;
        }
    }
    if (count>1) total += count-1;
    cout<<(total)<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}
#include<iostream>
#include <cmath>
using namespace std;

void tc(){
    int n;
    cin>>n;
    int temp = 10;
    if (n <= 10) {cout<<n<<"\n";return;}
    int len = to_string(n).length()-1;
    int total = (n/pow(10,len)) + (10*(len))-len;
    cout<<total<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}
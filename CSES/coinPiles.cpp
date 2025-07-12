#include<iostream>

using namespace std;

bool isValid(long long first, long long second, long long a, long long b){
    return ((((a*2)+b)==first) && ((a+(2*b))==second));
}

void isPossible(long long first, long long second){
    if (second > first) {
        isPossible(second,first);
        return;
    }

    if (first/2 > second || (first+second)%3 != 0) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        isPossible(a,b);
    }
    return 0;
}
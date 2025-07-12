#include<iostream>

using namespace std;

int main(){
    long long t;
    cin>>t;
    long long div = 5;
    long long count = 0;
    while(div <= t){
        count += (t/div);
        div *= 5;
    }
    cout<<count<<endl;
    return 0;
}
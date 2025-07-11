#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    long long t;
    cin>>t;
    long long total = (t*(t+1))/2;
    if (total&1) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;  
        long long half = total/2;
        unordered_set<long long> s1,s2;
        long long count = 0;
        for(long long i=t;i>=1;i--){
            if (i <= (half-count)){
                s1.insert(i);
                count += i;
            } else {
                s2.insert(i);
            }
        }
        cout<<s1.size()<<endl;
        for(const auto s:s1){
            cout<<s<<" ";
        }
        cout<<endl;
        cout<<s2.size()<<endl;
        for(const auto s:s2){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}
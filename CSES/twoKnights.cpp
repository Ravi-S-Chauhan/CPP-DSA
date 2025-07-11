#include<iostream>
using namespace std;


/**
 * 1. Here we find how many ways is invalid in a 2X3 matrix = 4
 * 2. Then we find how many 2X3 boxes are there in a nxn matrix
 * 3. To find how many row of size 2. Just draw a window of size 2 and slide until you find the end. It will always be n-1
 * 4. To find how many col of size 3. Just draw a window of size 3 and slide until you find the end. It will always be n-2
 * 5. The last part will to to find to total invalid and subtract from total.
 * 6. total = nCr = n!/r!(n-r)!
 * 7. invalid = 4*(n-1)*(n-2)
 * 7. ans = total-invalid
 */
int main(){
    long long t;
    cin>>t;
    if (t>=1) cout<<0<<endl;
    if (t>=2) cout<<6<<endl;
    for(long long i=3;i<=t;i++){
        long long n = i*i;
        long long total = ((n)*(n-1))/2LL;
        long long invalid = 4*(i-1)*(i-2);
        cout<<(total-invalid)<<endl;
    }
    return 0;
}


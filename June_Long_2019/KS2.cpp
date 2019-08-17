#include <bits/stdc++.h>
using namespace std;
void func(uint64_t n){
    uint64_t N = (10*n)-1;
    uint64_t t = N;
    while(1){
        t = ++N;
        uint64_t sum = 0;
        while(t!=0){
            sum += t%10;
            t=t/10;
        }
        if(sum%10 == 0){
            cout<<N;
            return;
        }
    }
    cout<<t;
}
int main(){
    int t=1;//cin>>t;
    while(t--){
        uint64_t n=2;
        //cin>>n;
        func(n);
        cout<<"\n";
    }
}

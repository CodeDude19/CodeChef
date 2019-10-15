#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int MaxVal = 0;
        for(int i=n-1;i>0;i--){
            int val = 0;
            for(int j=i-1;j>=0;j--){
                if(arr[j]%arr[i]==0) val++;
                if(MaxVal-val>j) break;  //if no. of numbers to check will not suffice to cross maxval ..then no use checking
            }
            if(MaxVal<val) MaxVal = val; 
        }
        printf("%d\n",MaxVal);
    }
    return 0;
}
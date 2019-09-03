#include<bits/stdc++.h>
using namespace std;
string solnFn(int n1,int n2,int n3,int m1,int m2, int m3){
    //case1 all same age :
    if(n1==n2==n3){
        if(m1==m2==m3) return "FAIR";
        else return "NOT FAIR";
    }else if(n1!=n2 && n1!=n3 && n2!=n3){
        int arr1[] = {n1,n2,n3};
        int arr2[] = {m1,m2,m3};
        for(int i =0;i<3;i++){
            for(int j=0;j<2;j++){
                if(arr1[j]>arr1[j+1]){
                    int temp = arr1[j+1];
                    arr1[j+1] = arr1[j];
                    arr1[j] = temp;

                    int temp2 = arr2[j+1];
                    arr2[j+1] = arr2[j];
                    arr2[j] = temp2;
                }
            }
        }
        if(arr2[2]>arr2[1] && arr2[1] > arr2[0]) return "FAIR";
        else return "NOT FAIR";
    }else{
        if(n1==n2){
            if(m1==m2) return "FAIR";
            else return "NOT FAIR";
        }if(n2==n3){
            if(m2==m3) return "FAIR";
            else return "NOT FAIR";
        }if(n1==n3){
            if(m1==m3) return "FAIR";
            else return "NOT FAIR";
        }
    }
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n1,n2,n3,m1,m2,m3;
        cin>>n1>>n2>>n3>>m1>>m2>>m3;
        cout<<solnFn(n1,n2,n3,m1,m2,m3)<<"\n";
    }
    return 0;
}

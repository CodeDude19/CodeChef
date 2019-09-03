#include<bits/stdc++.h>
using namespace std;
string solnFn(int n1,int n2,int n3,int m1,int m2, int m3){
    int arr1[] = {n1,n2,n3};
    int arr2[] = {m1,m2,m3}; // sorting
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
    if(arr1[2]>arr1[1] && arr1[1]>arr1[0]){
        if (arr2[2]>arr2[1] && arr2[1]>arr2[0]) return "FAIR";
        else return "NOT FAIR";
    }else if(arr1[2] == arr1[1] && arr1[1] == arr1[0]){
        if(arr2[2] == arr2[1] && arr2[1] == arr2[0]) return "FAIR";
        else return "NOT FAIR";
    }else if(arr1[2] == arr1[1] && arr1[1]>arr1[0]){
        if(arr2[2] == arr2[1] && arr2[1]>arr2[0]) return "FAIR";
        else return "NOT FAIR";
    }else if(arr1[1] == arr1[0] && arr1[0]<arr1[2]){
        if(arr2[1] == arr2[0] && arr2[0]<arr2[2]) return "FAIR";
        else return "NOT FAIR";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3,m1,m2,m3;
        cin>>n1>>n2>>n3>>m1>>m2>>m3;
        cout<<solnFn(n1,n2,n3,m1,m2,m3)<<"\n";
    }
    return 0;
}

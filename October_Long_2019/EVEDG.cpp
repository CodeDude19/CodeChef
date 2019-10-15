#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    int deg;
    vector<node*> ngb;
};
node* newnode(int data){
    node* n = new node;
    n->data = data;
    n->deg = 0;
    return n;
}
void addEdge(vector<node*> &v, int m, int k){
    v.at(m)->ngb.push_back(v.at(k));
    v.at(k)->ngb.push_back(v.at(m));
    v.at(m)->deg++;
    v.at(k)->deg++;
}
int a,b,c,n,m;
node* alpha;
void recsoln(){
    vector<node*> nodes;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        nodes.push_back(newnode(i));
    }
    for(int i = 0; i < m;i++){
        cin >> a >> b;
        addEdge(nodes, a-1,b-1);
    }
    if((m % 2) == 0){
        cout << 1 << endl;
        for(int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        alpha = nodes.at(i);
        if((alpha->deg % 2) == 0)
            continue;
        cout << 2 << endl;
        for(int j = 0; j < n; j++){
            if(j == alpha->data) cout << 2 << " ";
            else cout << 1 << " "; 
        }
        cout << endl;
        return;
    } 
    for(int i = 0; i < n; i++){
        alpha = nodes.at(i);
        if(alpha->deg == 0) continue;
        cout << 3 << endl;
        b = alpha->data;
        c = ((alpha->ngb).at(0))->data;
        for(int j = 0; j < n; j++){
            if((j == b)) cout << 2 << " ";
            else if (j == c) cout << 3 << " ";
            else cout << 1 << " ";
        }cout << endl;
        return;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        recsoln();
    }
    return 0;
}
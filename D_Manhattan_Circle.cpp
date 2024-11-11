#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>>vec(n,vector<char>(m));
        for(auto &i:vec){
            for(auto &j:i)cin>>j;
        }

        vector<vector<pair<int,int>>>mat;
            int a,b;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                    if(vec[i-1][j-1]=='#' ){
                            mat.push_back({i,j});
                    }
            }
        }

        if()

    }
}
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){

            int n ;cin>>n;
            string s;
            cin>>s;

            int l=0,r=0;

            for(int i=0;i<n;i++){
                
                for(int j=i+1;j<n;j++){
                    string sub = s.substr(i,j);
                    if(good(sub)){
                        cout<<"yes\n";
                        return;
                    }
                }
            }
            cout<<"no\n";

    }
}
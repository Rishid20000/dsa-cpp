#include<bits/stdc++.h>
using namespace std;


int main(){

    string filename;
    cin>>filename;

    ifstream file(filename);

    if(!file.is_open()){
        cout<<"error\n";
    }
    else{
            string content,rev;
            getline(file,content,'\0');

            rev = content;

            reverse(rev.begin(),rev.end());

            if(content==rev){
                cout<<"yes\n";
            }else{
                    cout<<"no\n";
            }


    }


    return 0;
}
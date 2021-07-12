#include<iostream>
#include<utility>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int s;
        cin>>s;
        vector< pair <char,int> >vec;
        for(int i =0;i<s;i++){
            pair<char,int> p;
            int num;
            char ch;
            cin>>ch;
            cin>>num;
            p=make_pair(ch,num);
            vec.push_back(p);
        }
        string line;
        int total=0;
        getchar();
        getline(cin,line);
        for(int i=0;i<line.size();i++){
            for(int j =0;j<s;j++){
                if(line[i]==vec[j].first){
                    total+=vec[j].second;
                }
            }
        }
        cout<<total<<endl;
        memset(&vec,0,vec.size());
    }
}

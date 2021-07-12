#include<iostream>
#include<utility>
#include<vector>
#include<map>

using namespace std;

/*int main()
{
    vector< map< char,int >  > mapping[10][10];
    map<char,int> mp;
    mp['a']=1;
    mapping[2][2].push_back(mp);
    cout<<mapping[2][2][0]['a']<<endl;
}*/
int main(){
int Test;
cin>>Test;
while(Test--){
    map<char,int> g;
    map<char,int>::iterator it;
    for(int i =0;i<5;i++){
        char ch;
        int num;
        cin>>ch>>num;
        g[ch]=num;
    }
    int total=0;
    cin.ignore();
    string str;
    getline(cin,str);
    for(int i =0;i<str.size();i++)
    {
        it=g.find(str[i]);
        if(it!=g.end()){
            total+=it->second;
        }
    }
    cout<<total<<endl;
}
    return 0;
}


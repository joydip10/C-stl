#include<iostream>
#include<utility>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    pair<int, char> g1,g3;
    pair<int , char>g2(2,'b');
    g1=make_pair(1,'a');
    g3.first=3;
    g3.second='c';
    pair<int , char> q[3];
    for(int i =0;i<3;i++)
    {
        int num;
        char c;
        cin>>num>>c;
        q[i]=make_pair(num,c);
    }
    for(int i=0;i<3;i++)
    {
        cout<<q[i].first<<"  " <<q[i].second<<endl;
    }

    //comparison
    pair<int, int>pair1 = make_pair(1, 12);
    pair<int, int>pair2 = make_pair(9, 12);


    cout << (pair1 == pair2) << endl;
    cout << (pair1 != pair2) << endl;
    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 > pair2) << endl;
    cout << (pair1 < pair2) << endl;


   //swapping
    pair<char, int>pairr1 = make_pair('A', 1);
    pair<char, int>pairr2 = make_pair('B', 2);

    cout << "Before swapping:\n " ;
    cout << "Contents of pair1 = " << pairr1.first << " " << pairr1.second ;
    cout << "Contents of pair2 = " << pairr2.first << " " << pairr2.second ;
    //pairr1.swap(pairr2);

    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pairr1.first << " " << pairr1.second ;
    cout << "Contents of pair2 = " << pairr2.first << " " << pairr2.second ;

    return 0;
}*/
/*int main()
{
    pair<char,int> g1,g2;
    g1=make_pair('a',1);
    g2=make_pair('b',2);
    cout<<g1.first<<" "<<g1.second<<endl;
    cout<<g2.first<<" "<<g2.second<<endl;
    cout<<"After Swapping\n";
    pair<char,int> temp;
    temp.first=g1.first;
    temp.second=g1.second;
    g1.first=g2.first;
    g1.second=g2.second;
    g2.first=temp.first;
    g2.second=temp.second;
    cout<<g1.first<<" "<<g1.second<<endl;
    cout<<g2.first<<" "<<g2.second<<endl;
}*/
int main()
{
        vector< pair <char,int> > vec;
        for(int i =0;i<5;i++){
            pair<char,int> p;
            char ch;
            int num;
            cin>>ch;
            cin>>num;
            p=make_pair(ch,num);
            vec.push_back(p);
        }
        pair<char,int> q;
        //q=vec[2];
        cout<<vec[2].first<<endl;
        cout<<vec[2].second<<endl;
}


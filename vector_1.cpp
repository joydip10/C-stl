#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> mvec;
    cout<<"Insert elements\n";
    for(int i = 0;i<5;i++)
    {
        mvec.push_back(i);
    }
    cout<<"Showing elements\n";
    for(int i = 0;i<5;i++)
    {
        cout<<mvec.at(i)<<endl;;
    }
    cout<<"Size of the vector: "<<mvec.size()<<endl;
    cout<<"Starting element: "<<mvec.front()<<endl;
    cout<<"Ending element: "<<mvec.back()<<endl;
    cout<<"Insert at position: ";
    int pos;
    cin>>pos;
    cout<<"Value: ";
    int a;
    cin>>a;
    mvec.insert(mvec.begin()+pos,a);
    cout<<"After inserting we get: "<<endl;
    vector<int>::iterator i;
    for(i = mvec.begin();i!=mvec.end();i++)
    {
        cout<<*i<<endl;
    }

    mvec.resize(4);
    cout<<"Reverse iterator and resizing : "<<endl;
    vector<int> :: reverse_iterator ir;
    for(ir = mvec.rbegin();ir != mvec.rend();++ir)
    {
        cout<<*ir<<endl;
    }

}

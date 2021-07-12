#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    for(int i =0;i<10;i++)
    {
        vec.push_back(i+1);
    }

    if(vec.empty())
    {
        cout<<"Vector is empty!!"<<endl;
    }
    else
    {
        cout<<"Not empty"<<endl;
    }
    vector<int>:: iterator i;
    for(i = vec.begin();i<vec.end();i++)
    {
        cout<<*i<<endl;
    }
    cout<<"Reverse Order : "<<endl;
    vector<int>:: reverse_iterator ir;
    for(ir = vec.rbegin();ir<vec.rend();ir++)
    {
        cout<<*ir<<endl;
    }

    cout<<"Inserting at position: "<<endl;
    vec.insert(vec.begin()+2,19);
    for(i = vec.begin();i<vec.end();i++)
    {
        cout<<*i<<endl;
    }

    cout<<"At position 5 element is: "<<vec.at(4)<<endl;

    int arr[5]={5,6,4,3,2};
    sort(arr,arr+5);
    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorting a vector:"<<endl;
    //sorting_vector
    vector<int> num;
    num.push_back(7);
    num.push_back(1);
    num.push_back(4);
    num.push_back(3);
    num.push_back(2);
    sort(num.begin(),num.end());
    for(int i =0;i<5;i++)
    {
        cout<<num[i]<<endl;
    }
    return 0;
}

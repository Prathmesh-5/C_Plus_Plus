#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(10);
    cout<<"Enter the elemnts :"<<endl;
    for(int i=0;i<v.size();i++) cin>>v[i];
    cout<<"displaying initial vector :";
    for(int x1:v) cout<<x1<<" ";
    cout<<endl;

    cout<<"v.begin() = "<<*v.begin()<<" , v.end()-1 = "<<*(v.end()-1)<<endl;

    // delete 3rd position element from lhs
    cout<<"*** delete 3rd position element from lhs ***"<<endl;
    v.erase(v.begin()+2);
    for(int x1:v) cout<<x1<<" ";
    cout<<endl;

    //delete 4th position element from rhs
    cout<<"*** delete 4th position element from lhs ***"<<endl;
    v.erase(v.end()-4);
    for(int x1:v) cout<<x1<<" ";
    cout<<endl;

    return 0;
}
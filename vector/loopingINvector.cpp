/*
looping in vector :

1. for loop
2. for each loop
3. while loop

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // for loop :

    // *******************************
    vector<int>v1; // if size not mention
    int element;
    for(int i=0;i<5;i++){
        cin>>element;
        v1.push_back(element);
    }

    cout<<"size of v1: "<<v1.size()<<endl;

    // display vector v1 :
    cout<<"display v1 vector : "<<endl;
    for(int j=0;j<5;j++) cout<<v1[j]<<" ";
    cout<<endl;

    // ********************************
    vector<int>v2(6);  // // if size is mention

    for(int i=0;i<6;i++){ 
        cin>>v2[i];
    }

    cout<<"size of v2 : "<<v2.size()<<endl;

    // display vector v1 :
    cout<<"display v2 vector : "<<endl;
    for(int j=0;j<6;j++) cout<<v2[j]<<" ";
    cout<<endl;


    // for each loop :
    for(int x:v1) cout<<x<<" ";
    cout<<endl;

    // while loop :

    // *************************
    vector<int>v3;
    int i=0;
    int elem;
    while(i<4){
        cin>>elem;
        v3.push_back(elem);
        i++;
    }

  for(int y:v3) cout<<y<<" ";
    cout<<endl;

    // *************************

    vector<int>v4(5);

    int k=0;
    while(k<v4.size()){

        cin>>v4[k];
        k++;
    }
    for(int z:v4) cout<<z<<" ";
    cout<<endl;


    return 0;
}
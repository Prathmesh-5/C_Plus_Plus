// pair sum fing=ding of an array :

#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int arr[100];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<"Enter what sum you want : ";
    cin>>k;

    int freq[100]={0};

    for(int i=0;i<n;i++) freq[arr[i]]++;

    int dif;
    for(int j=0;j<n;j++){
        dif=k-arr[j];
        if((dif != arr[j] && freq[dif] == 1) || (dif == arr[j] && freq[dif] > 1)){
            cout<<"{"<<arr[j]<<","<<dif<<"}"<<endl;

            if(freq[dif]==1){
            freq[arr[j]]=INT_MAX;
            freq[dif]=INT_MAX;
            }

            else 
            freq[arr[j]]--;
        }

    }

    return 0;
}
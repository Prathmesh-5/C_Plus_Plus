#include<iostream>
#include<climits>
using namespace std;

int maximum(int arr[],int size){
        int max=INT_MIN;
            for(int i=0;i<size;i++){
                    if(max<arr[i]) max=arr[i];
                        }
                            return max;

                            }


                            int minimum(int arr[],int size){
        int min=INT_MAX;
            for(int i=0;i<size;i++){
                    if(min>arr[i]) min=arr[i];
                        }
                            return min;

                            }


                            int main(){
                                int size;
                                    cin>>size;
                                        int arr[100];

                                            for(int i=0;i<size;i++) cin>>arr[i];

                                                int ans_max=maximum(arr,size);
                                                    cout<<"answer = "<<ans_max<<endl;

                                        int ans_min=minimum(arr,size);
                                                    cout<<"answer = "<<ans_min<<endl;

                                                        return 0;
                            
}
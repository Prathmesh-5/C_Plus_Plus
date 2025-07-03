#include<iostream>
#include<cmath>
using namespace std;
int Complement(int n) {

        if(n==0) return 1;
        int count=-1;
        int sum=0;

        while(n!=0){
            
            count++;
            if((n^1) & 1){
            

            sum+=pow(2,count);

            }
            n>>=1;

            
        }

        return sum;
        
    }

    int main(){
        int n;
        cout<<"Enter number : ";
        cin>>n;

        cout<<n<<" ka 1s complent hai :"<<Complement(n)<<endl;


        return 0;
    }



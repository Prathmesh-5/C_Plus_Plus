/*

Problem Statement -1: Student Grade Calculator with Validation and Subject Failure Check
 Write a function to input marks of five subjects: Physics, Chemistry, Biology, Mathematics, and Computer. 
 Calculate the total percentage and determine the grade based on the following criteria:
Percentage ≥ 90% → Grade A
Percentage ≥ 80% → Grade B
Percentage > 70% → Grade C
Percentage ≥ 60% Grade D
. Percentage ≥ 40% Grade E
. Percentage < 40% → Grade F
Additional Constraints:
. Each subject's mark must be between 0 and 100. If an invalid input is given, display an error message and terminate the program.
If the student scores less than 35 marks in any one subject, they are automatically assigned Grade F, regardless of overall percentage.
Display the result in a formatted report showing subject-wise marks, percentage, and final grade.

*/


#include<iostream>
using namespace std;

int main(){
    int ph,ch,bio,mth,comp;
    int arr[5];
    cout<<"Enter physics , chemistry, biology , math and computer marks respectively : ";
    for(int i=0;i<5;i++) cin>>arr[i];

    ph=arr[0];
    ch=arr[1];
    bio=arr[2];
    mth=arr[3];
    comp=arr[4];

    for(int j=0;j<5;j++){
        if(arr[j]<0 || arr[j]>100){
            cout<<"error error error"<<endl;
            return 0;
        }
    }
    
    int sum=ph+ch+bio+mth+comp;
    float per=sum/5.0;
    char grade;

    int flag=1;
    for(int i=0;i<5;i++){
        if(arr[i]<35){
            flag=0;
            break;
        }
    }
    if(flag==1){    

    if(per>=90.0) grade='A';
    else if(per>=80.0) grade='B';
    else if(per>=70.0) grade='C';
    else if(per>=60.0) grade='D';
    else if(per>=40.0) grade='E';
    else grade='F';
    }
    else grade='F';

    cout<<"generated report card : "<<endl;

    cout<<"marks -\nPhysics = "<<ph<<"\nChemistry = "<<ch<<"\nBiology = "<<bio<<"\nMaths = "<<mth<<"\nComputer = "<<comp<<endl;
    cout<<"\nPercentage = "<<per<<endl;
    cout<<"Grade = "<<grade<<endl;


    return 0;
}
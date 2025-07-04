#include<iostream>
using namespace std;
int main()
{
 
float marks;
while(true)
{
    cout<<"Enter Your Marks in Percentage: ";
    cin>>marks;

    if(marks>100 || marks<0){
        cout<<"Invalid Marks. Enter valid Marks\n";
    }
    else if(marks>=90) {
        cout<<"Your Grade is A+\n";
    }
    else if(marks>=80) {
        cout<<"Your Grade is A\n";
    }
    else if(marks>=70) {
        cout<<"Your Grade is B\n";
    }
    else if(marks>=60) {
        cout<<"Your Grade is C\n";
    }
    else if(marks>=50) {
        cout<<"Your Grade is D\n";
    }
    else{
       cout<<"You are Fail\n";
    }


}


    return 0;

}
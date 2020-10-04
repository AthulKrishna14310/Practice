#include<iostream>
using namespace std;
int main(){
   
    int year;
    bool leapYear=false;
    cin>>year;
    
    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        leapYear=true;
    }else{
        leapYear=false;
    }

    if(leapYear){
        cout<<"12.09."<<year;
    }
    else
        cout<<"13.09."<<year;
    
    return 0;
}
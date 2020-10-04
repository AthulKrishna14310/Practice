#include <iostream>
using namespace std;
int main(){
    
int page;
int middle;
int pageNumber;
int foundPage1;
int foundPage2;
int start=0;
int count=0;
cin>>page;
cin>>pageNumber;
middle=page/2;
        
if(pageNumber>=middle){
    start=page;
}else{
    start=1;
}
cout<<"\ntest : middle-> "<<middle;
       
if(start==1){

    cout<<"\ntest : start-> "<<start;
    for(int i=start;i<=page;i=i+2){
        if(pageNumber==1){
            break;
        }
        foundPage1=i+1;
        foundPage2=i+2;
        
        cout<<"\ntest : PG 1 -> "<<foundPage1;
        cout<<"\ntest : PG 2 -> "<<foundPage2;
        count++;
        if(foundPage1==pageNumber||foundPage2==pageNumber){
            break;        
        }
        
        
        
     }
    }
    else if(start==page){
        cout<<"\ntest : start-> "<<start;
        for(int i=start;i>=1;i=i-2){
            foundPage1=i;
            foundPage2=i-1;
            cout<<"\ntest : PG 1 -> "<<foundPage1;
            cout<<"\ntest : PG 2 -> "<<foundPage2;
            if(foundPage1==pageNumber||foundPage2==pageNumber){
                break;        
            }else{
                count++;
            }
        } 
    }

cout<<" Value count ->" <<count;

}
#include<iostream>
using namespace std;

int main(){
    
    int matrix[100][100];
    int n=0;
    int lSum=0;
    int rSum=0;
    int dDifference=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                lSum+=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==(n-1))
            rSum+=matrix[i][j];
        }
    }

    dDifference=lSum-rSum;
    if(dDifference<0){
        dDifference=0-dDifference;
    }
    else    
        dDifference=dDifference;

    cout<<dDifference;

return 0;
}
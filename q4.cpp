#include<iostream>
using namespace std;
int main(){
    int scoreBoard[100];
    int chacha[100];
    int players;
    int chachaCount;
    int ranks[100];
    int ranges[100];
    int k=0;
    int test;
    int x=0;
    int result=0;
    bool index=false;
   
    cin>>players;
    for(int i=0;i<players;i++)
        cin>>scoreBoard[i];
    
    cin>>chachaCount;
    for(int j=0;j<chachaCount;j++)
        cin>>chacha[j];
    
    for(int i=0;i<players;i++){
      test=scoreBoard[i];
      ranges[k]=test;
      for(int j=i+1;j<=players;j++){
          if(scoreBoard[j]==test)
            i=i+1;
      }
      k=k+1;  
    }
    
    for(int i=0;i<chachaCount;i++){
        test=chacha[i];
        
        index=false;
            for(int j=0;j<k;j++){
                if(test>=ranges[j]){
                    result=j+1;
                    cout<<result<<"\n";
                    j++;
                    index=true;
                    break;
                }
            }
            if(index==false){
                cout<<k+1<<"\n";
            }
        
    }

    
return 0;
}
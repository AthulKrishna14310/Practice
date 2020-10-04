#include <iostream>
using namespace std;
int main(){
    int arrayOfPrisnors[100];
    int arrayOfSweets[100];
    int startingIndexes[100];
    int n;
    int numberOfPrisors;
    int numberOfSweets;
    int startingIndex;
    int pointer;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arrayOfPrisnors[i];
        cin>>arrayOfSweets[i];
        cin>>startingIndexes[i];
    }

    for(int i=0;i<n;i++){
        numberOfPrisors=arrayOfPrisnors[i];
        numberOfSweets=arrayOfSweets[i];
        startingIndex=startingIndexes[i];

        while(numberOfSweets>0){
            numberOfSweets--;
            pointer=startingIndex;
            if(startingIndex==numberOfPrisors)
                startingIndex=1;           
            else
                startingIndex++;
            
         }
        cout<<pointer<<"\n";
    }

}
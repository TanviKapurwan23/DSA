#include<iostream>
using namespace std;


void printItems(int n){
    for(int i=0; i<n; i++){           //O(N^2
        for(int j=0; j<n; j++){
            cout<<i<<j<<endl;
        }
    }

    for(int k=0; k<n; k++){           // O(N)
        cout<<k<<endl;
    }
}


int main(){

    printItems(10);

    return 0;
}

// O(N^2 + N) = O(N^2)

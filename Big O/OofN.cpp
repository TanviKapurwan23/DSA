#include<iostream>
using namespace std;

int printItems(int n){
    for(int i = 0; i < n; i++){
        cout << i <<endl;
    }
    return 0;
}

int main(){
    printItems(10);
    return 0;
}


//TC: O(N)



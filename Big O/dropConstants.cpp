#include<iostream>

using namespace std;

int printItems(int n)
{
    for(int i=0; i<n; i++){
        cout<<i<<endl;
    }

    for(int j=0; j<n; j++){
        cout<<j<<endl;
    }

    return 0;
}

int main()
{

    printItems(10);

    return 0;

}



// Time Complexity: n+n = 2n => O(N)
// Drop Constants
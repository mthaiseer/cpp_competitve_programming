#include <iostream>
using namespace std;

/**
 * XOR each element with will cancel out each other 
 * */
int  findUnique(int arr[], int n){
    int el = 0;
    for(int i=0; i<n; i++){
        el = el ^ arr[i];
    }
    return el;
}

int main() {

    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0; i<n; i++){
        int el;
        cin>>el;
        arr[i] = el;
    }

    cout<<"odd element is : "<<findUnique(arr, n);
    return 0;

}

#include <iostream>
using namespace std;
/**
 *   mask 1 to by left shift and make OR will place 1 in that position 
 * **/
int setBitAt(int n, int pos){

    int mask  = 1<< pos;
    return (n | mask) ;


}

int main() {

    
    int t;
    cin>>t;

    while(t > 0){

        int n;
        cin>>n;
        int pos;
        cin>>pos;
        cout<<" After set bit : "<<setBitAt(n, pos)<<endl;

        t--;

    }
    return 0;

}

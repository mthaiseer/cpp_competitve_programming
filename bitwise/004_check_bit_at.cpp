#include <iostream>
using namespace std;

bool getBitAt(int n, int pos){

    int mask  = 1<< pos;
    return (n & mask) > 0;
}

int main() {

    
    int t;
    cin>>t;

    while(t > 0){

        int n;
        cin>>n;
        int pos;
        cin>>pos;
        cout<<n<<" 's position at : "<<(getBitAt(n, pos)== 1?"1": "0")<<endl;

        t--;
    }
    return 0;
}

#include <iostream>
using namespace std;

bool oddEven(int n){
    return n & 1;
}

int main() {

    
    int t;
    cin>>t;

    while(t > 0){

        int n;
        cin>>n;
        cout<<n<<" is : "<<(oddEven(n)== 1?"ODD": "EVEN")<<endl;

        t--;

    }
    return 0;

}

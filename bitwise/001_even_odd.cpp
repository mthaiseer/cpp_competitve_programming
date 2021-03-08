#include <iostream>
using namespace std;


int main() {
   int n;
   cin>>n;

    /**
        011 & 001 =  1 is ODD
        010 & 001 = 0  is EVEN 
    **/
    string result = (n & 1) == 1 ? "ODD" : "EVEN";
    cout<< result ;

}
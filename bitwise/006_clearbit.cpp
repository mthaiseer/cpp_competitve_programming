#include <iostream>
using namespace std;

/**
 * input 9 3 
 * output 1 
 **/
int clearBit(int n, int pos){

    int mask = ~(1  << pos);
    return n & mask;


}

int main() {


  int n;
  cin>>n;
  int pos;
  cin>>pos;

  cout<< clearBit(n, pos);
   
}

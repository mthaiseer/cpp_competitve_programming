#include <iostream>
using namespace std;

/**
 * Input : 5 2 0  
 * output 1 (001)
 * 
 * 
 * input : 5 1 1
 * output : 7 (111) 
 * 
 **/
int updateBit(int n, int pos, int bit){

    //clear bit at postion 
    int mask = ~(1  << pos);
    n =  n & mask;
    //update bit at position
    return n | (bit<< pos);


}

int main() {

  int n;
  cin>>n;
  int pos;
  cin>>pos;
  int bit;
  cin>>bit;

  cout<< updateBit(n, pos, bit);
   
}

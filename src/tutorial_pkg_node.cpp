#include <iostream>

using namespace std;

// TODO: add some instruction for each component of the code
/* This code implements the Fibonacci sequence
 * input: number of digits in the sequense, always start with 0, 1 
 * output: Fibonacci sequence
 */ 
int main() {
  int n1=0,n2=1,n3,i,number; // the first two int
 cout<<"Enter the number of elements: ";
 cin>>number;
 cout<<n1<<" "<<n2<<" ";
 for(i=2;i<number;++i)
 {
  n3=n1+n2;
  cout<<n3<<" ";
  n1=n2;
  n2=n3;
 }

 cout << "\n";
   return 0;
   }

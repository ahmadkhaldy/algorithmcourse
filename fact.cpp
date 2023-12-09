#include<iostream>

using namespace std;

int recursive_factorial(int x){
  if(x==0)
  return 1;
  
  return x*recursive_factorial(x-1);
}
int iterative_factorial(int z){
int sum=1;
  for(int i=2;i<=z;++i)
  sum=sum*i;
}
main(){
  cout<<itreative_factorial(30)<<endl;
  cout<<recursive_factorial(20)<<endl;
}

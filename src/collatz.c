#include <stdio.h>
#include <stdlib.h>
void collatz_rec(unsigned int n);

int main(){

  void collatz_rec(unsigned int n){
  if(n>1){
    printf("%d ",n);
    if(n%2==0){
    return collatz_rec(n/2);
  }else{
    return collatz_rec(3*n+1); 
   }
  }
printf("%d\n",n);
 } 
collatz_rec(17);
}

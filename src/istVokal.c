#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool istVokal(char c);
int main (){
  bool istVokal(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
      return true;
    } else {
      return false;
    }
  }
  istVokal('o');
  int i= istVokal('o');
  printf("%d\n",i);
}

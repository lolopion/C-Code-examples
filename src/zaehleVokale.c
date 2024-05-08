#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "istVokal.c"
int zaehleVokale(char* s){
  char c=*s;
  s=c;
  int j=0;
  int i=0;
  while(istVokal(s[j]) == 1){
   i++;
   j++;
   if(istVokal(s[j]) == 0){
     j++;
   }
   if(s[j]== "\0"){
   return i;
   }
  } 
}

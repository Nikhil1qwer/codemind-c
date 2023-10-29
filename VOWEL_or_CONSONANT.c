#include<stdio.h>

  int main ( )
  {
      char c;
      scanf("%c",&c);
      
      switch(c){
          case 'A' :
          case 'E' :
          case 'I' :
          case 'O' :
          case 'U' :
          case 'a' :
          case 'e' :
          case 'i' :
          case 'o' :
          case 'u' :
          printf("VOWEL");
          break;
          default :
          printf("CONSONANT");
          break;
      }
  }
#include<stdio.h>

   int main () {
       
       float h;
       scanf("%f",&h);
       
       if ( h < 150 ){
           printf("The person is Dwarf.");
       } 
       else if ( h > 150 && h <= 165 ){
           printf("The person is average heighted.");
       } 
       else if ( h > 165 && h <= 195.5 ){
           printf("The person is taller.");
       } 
       else {
           printf("Abnormal height.");
       }
   }
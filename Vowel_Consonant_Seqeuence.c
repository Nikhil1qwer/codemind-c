#include <stdio.h>

 int is_vowel (char ch) {
     
     if (ch == 'a' || ch == 'e' || ch == 'o' || ch =='i' || ch == 'u') {
         return 1;
     }
     
    return 0;
 }
 int main () {
     char str[1001];
     scanf("%[^
]", str);
     
     int cose_C = 0, cose_V = 0;
     
     for (int i = 0; str[i] != NULL; i++) {
         if(is_vowel(str[i])) {
             
             cose_V++;
             cose_C = 0;
             
             if (cose_V == 1) {
                 printf("%c", 'V');
             } else {
                 continue;
             }
             
         } else {
             
             cose_C++;
             cose_V = 0;
             
             if (cose_C == 1) {
                 printf("%c", 'C');
             } else {
                 continue;
             }
             
         }
     }
     
 }
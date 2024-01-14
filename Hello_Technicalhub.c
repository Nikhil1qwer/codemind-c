#include <stdio.h>

void Hello(void) {
    printf("Hello Technicalhub
");
}

int main () {
    char str[1002];
    scanf("%[^
]", str);
    
    Hello();
    printf("%s", str);
    
}
#include <stdio.h>

int main() {
    char s[100];
    
    scanf("%[^\n]%*c", s);   // Read the input string
    printf("Hello, World!\n");
    printf("%s", s);
    
    return 0;
}

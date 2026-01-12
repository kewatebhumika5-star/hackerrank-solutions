#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{


    char ch;
    char s[100];
    char sen[100];

    // Take character input
    scanf("%c", &ch);

    // Take string input
    scanf("%s", s);

    // Consume newline left by previous scanf
    scanf("\n");

    // Take sentence input
    scanf("%[^\n]%*c", sen);

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
return 0;
    
}
    

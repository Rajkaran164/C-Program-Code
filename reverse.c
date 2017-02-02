/* Example to reverse a sentence entered by user without using strings. */

#include <stdio.h>
void reverse();

int main()
{
    printf("Enter a sentence: ");
    reverse();

    return 0;
}

void reverse()
{
    char c;
    scanf("%c", &c);

    if( c != '\n')
    {
        reverse();
        printf("%c",c);
    }
}

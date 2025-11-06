//Vowel or Consonant
#include <stdio.h>
void main() {
    char ch;
    printf("Enter the Alphabet : ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("The Alphabet \'%c\' is an Vowel",ch);
    else
        printf("The Alphabet \'%c\' is an Consonant",ch);
}
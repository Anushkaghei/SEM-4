//to check if a string pattern is present in a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100],pat[100]; //declare character array to store the string and pattern
    int i,j,flag=0;
    printf("Enter the string: ");
    gets(str); //read the string
    printf("Enter the pattern: ");
    gets(pat); //read the pattern
    for(i=0;i<strlen(str);i++) //iterates through the string
    {
        if(str[i]==pat[0]) //checks if the first character of the pattern matches the first character in the string
        {
            for(j=0;j<strlen(pat);j++) //iterates through the pattern
            {
                if(str[i+j]!=pat[j]) //checks if the characters in the string and pattern are equal
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("Pattern found at position %d",i+1); //prints the position of the pattern
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Pattern not found");
    }
    return 0;
}

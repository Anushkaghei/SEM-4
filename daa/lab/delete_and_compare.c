/*
Given 2 strings "a" and "b", compare if they are the same. 
But in between letters there is an indicator ‘$’ which specifies to delete the previous character. 
After removing all the ‘$’ (given it deletes the previous character) determine whether the strings are equal.
Return 1 if they are equal, else return 0.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int deleteCompare(char * s, char * t)
{
    char outs[100] = "", outt[100] = "";
    int i = 0;
    for (i = 0; i <strlen(s); i++) {
        if (s[i] != '$') {
            strncat(outs, &s[i], 1);
        } else if (strlen(outs) > 0) {
            outs[strlen(outs) - 1] = '\0';
        }
    }
    for (i = 0; i <strlen(t); i++) {
        if (t[i] != '$') {
            strncat(outt, &t[i], 1);
        } else if (strlen(outt) > 0) {
            outt[strlen(outt) - 1] = '\0';
        }
    }
    return (strcmp(outs, outt) == 0) ? 1 : 0;
}

int main(){
    char s[50];
    char t[50];
    scanf("%s",&s);
    fflush(stdin);
    scanf("%s",&t);
    printf("%d",deleteCompare(s,t));
    return 0;
}


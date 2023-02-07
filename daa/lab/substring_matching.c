/*
Given 2 strings s1 and s2, return the index of the first occurrence of s2 in s1, or -1 if s2 is not part of s1.
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>


int strStr(char * s1, char * s2){

    for (int i = 0; i <=strlen(s1)-strlen(s2); i++)
    {   
        int j;
        for (j = 0; j <strlen(s2); j++){
            if (s1[i + j] != s2[j])
                break;
        }
 
        if (j == strlen(s2))
            return i;
    }
 
        return -1;
}

int main(){
    char s1[50];
    char s2[50];
    scanf("%s",s1);
    fflush(stdin);
    scanf("%s",s2);
    printf("%d",strStr(s1,s2));
    return 0;
}

/*
 Given a pattern  and a sentence “s”, check the correspondence. Your task is to find out if sentence “s” follows the same pattern.
 Here “follow” means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. 
 (You can assume only lower case letters exist)
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool wordPattern(char * pattern, char * s){
    int i=0,j=0,k=0;
    char *arr[strlen(pattern)];
    char *arr2[strlen(pattern)];
    char *token = strtok(s," ");
    while(token!=NULL){
        arr[i] = token;
        i++;
        token = strtok(NULL," ");
    }
    if(i!=strlen(pattern)){
        return false;
    }
    for(i=0;i<strlen(pattern);i++){
        for(j=i+1;j<strlen(pattern);j++){
            if(pattern[i]==pattern[j]){
                if(strcmp(arr[i],arr[j])!=0){
                    return false;
                }
            }
        }
    }
    for(i=0;i<strlen(pattern);i++){
        for(j=i+1;j<strlen(pattern);j++){
            if(strcmp(arr[i],arr[j])==0){
                if(pattern[i]!=pattern[j]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    char pattern[50];
    char s[50];
    scanf("%[^\n]s", s);
    fflush(stdin);
    scanf("%s",pattern);
    printf("%d",wordPattern(pattern,s));
    return 0;
}

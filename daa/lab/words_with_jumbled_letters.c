//You are given 2 words "word1" and "word2" jumbled. Determine if they are made up of the same letters. If yes return 1 else return 0.
#include<stdio.h>
#include<string.h>

char* sortWord(char* arr){
    // Write your code hereint stringlen = strlen(arr);
    for(int i=0;i<strlen(arr)-1;i++)
    {
        for(int j=i+1;j<strlen(arr);j++)
        {
            if(arr[i]>arr[j])
            {
                char t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    return arr;
}

int determine(char* word1, char* word2){
    char* w1 = sortWord(word1);
    char* w2 = sortWord(word2);
    // Write your code here
    if(strcmp(w1,w2)==0)
        return 1;
    else
        return 0;
}


int main(){
    char word1[100];
    char word2[100];
    scanf("%s",&word1);
    fflush(stdin);
    scanf("%s",&word2);
    printf("%d",determine(word1,word2)) ;
}

//determine the length of the right most word in that sentence[Non-space Character]. Ignore spaces at the end
#include<stdio.h>
#include<string.h>
 
int lengthOfRight(char *s){
    // Write your code here
    int ct=0;

    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]==' ')
            break;
        ct++;
    }
    return ct;
}
 
int main(){
    char sentence[50];
    fgets(sentence,50,stdin);
    int count;
    count = lengthOfRight(sentence);
    printf("%d",count);
}

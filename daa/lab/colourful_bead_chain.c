#include <stdio.h>
#include <string.h>

int min(int a, int b){
    return (a>b) ? b : a;
}

int max(int a, int b){
    return (a>b) ? a : b;
}

int minTime(char * colors, int* neededTime, int neededTimeSize){
    
    int minT = 0;
    int maxT = 0;
    int i = 0;
    while (colors[i] != '\0'){
        if (colors[i] == colors[i+1]){
            minT += min(neededTime[i], neededTime[i+1]);
            maxT += max(neededTime[i], neededTime[i+1]);
        }
        else{
            maxT += neededTime[i];
        }
        i++;
    }

    return minT;
}

int main()
{
    char colors[50];
    int timeSize;
    int time[50];
    scanf("%s",colors);
    scanf("%d", &timeSize);
    for (int i = 0; i < timeSize; i++)
    {
       scanf("%d",&time[i]);
    }
    printf("%d",minTime(colors,time,timeSize));
    return 0;
}

#include <stdio.h>
#include <stdbool.h>

bool juiceChange(int* bills, int billSize){
    int ct5 = 0;
    int ct10 = 0;
    for (int i = 0; i < billSize; i++)
    {
        if (bills[i] == 5)
        {
            ct5++;
        }
        else if (bills[i] == 10)
        {
            if (ct5 == 0)
            {
                return false;
            }
            ct5--;
            ct10++;
        }
        else if (bills[i] == 20)
        {
            if (ct10 > 0 && ct5 > 0)
            {
                ct10--;
                ct5--;
            }
            else if (ct5 >= 3)
            {
                ct5 -= 3;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int bills[50];
    int billSize;
    scanf("%d", &billSize);
    for (int i = 0; i < billSize; i++)
    {
       scanf("%d",&bills[i]);
    }
    printf("%d",juiceChange(bills,billSize));
    return 0;
}

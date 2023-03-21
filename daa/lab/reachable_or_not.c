#include <stdio.h>
#include <stdbool.h>

bool hops(int* arr, int arrSize){
    int maximum = 0;
    for (int i = 0; i < arrSize; i++) {
        if (i > maximum) {
            return false;
        }
        maximum = fmax(maximum, i + arr[i]);
        if (maximum >= arrSize - 1) {
            return true;
        }
    }
    return true;      
}

int main() {
    int arrSize;
    scanf("%d", &arrSize);

    int arr[arrSize];
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", hops(arr,arrSize));

    return 0;
}

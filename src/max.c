#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    assert(numbers != NULL);
    int m = numbers[0]; // maks first element of array 
    for (int i=0; i < size; i++){
        if(numbers[i] > m)
            m = numbers[i];
    }

    return m;
}

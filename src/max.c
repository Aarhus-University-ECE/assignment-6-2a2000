#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    assert(numbers != NULL); //to ensure that the array isn't empty 
    int m = numbers[0]; // max is the first element of array 
    for (int i=0; i < size; i++){
        if(numbers[i] > m)
            m = numbers[i]; // find max and reurn it 
    }

    return m;
}

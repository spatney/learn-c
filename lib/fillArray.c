#include <stdlib.h>
#include <time.h>

void fillArray(int *numbers, long size)
{
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        *(numbers + i) = rand() % size;
    }
}
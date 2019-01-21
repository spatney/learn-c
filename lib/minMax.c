void minMax(int *begin, int *end, int **smallest, int **largest)
{
    if (begin == end)
    {
        *smallest = 0;
        *largest = 0;
        return;
    }

    *smallest = *largest = begin;

    while (++begin != end)
    {
        if (**largest < *begin)
        {
            *largest = begin;
        }

        if (**smallest > *begin)
        {
            *smallest = begin;
        }
    }
}
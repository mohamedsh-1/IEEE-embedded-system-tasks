#include <stdio.h>

int flipBit(int value, int position)
{
    return value ^ (1 << position);
}

int main()
{
    int data = 10;
    int pos = 1;

    data = flipBit(data, pos);

    printf("Result = %d\n", data);
    return 0;
}

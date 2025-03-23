#include <stdio.h>

int main()
{
    short int si;
    int i;
    long int li;

    int sizeofli = sizeof(li);
    int sizeofi = sizeof(i);
    int sizeofsi = sizeof(si);

    printf("Long int size = %d\n" , sizeofli);
    printf("Long int size = %d\n" , sizeofi);
    printf("Long int size = %d\n" , sizeofsi);

    // The results of this is 4,4,2 so 4 bytes for intigers and long ints, but for short ints its 2 bytes

    return 0;
}
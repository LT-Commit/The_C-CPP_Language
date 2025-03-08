#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int min;
    int secs;
    printf("Input mins: ");
    scanf("%d", &min);

    secs = min * 60;
    
    for(int i = 0; i <= secs; i++)
    {
        printf("Time left = %d\n", secs - i);
        sleep(1);
    }

    return 0;
} // to
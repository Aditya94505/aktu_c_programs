#include <stdio.h>

void main()
{
    for(int i=0; i<11; i++)
    {
        
        if(i==5) {
            printf("Skip %d \n",i);
            continue;
        }
        printf("%d \n",i);
    }
}

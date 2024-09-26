#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_memst(char *s ,char a , unsigned int n)
{
    unsigned int i;

    for(i = 0 ; i < n ;i++)
    {
        s[i] = a;
    }
    return s;
}   

void *_calloc(unsigned int nmemb, unsigned int size)
{
     if(nmemb == 0 || size == 0)
        return 0;

        char *ptr;
        ptr = malloc(size * nmemb);
        if (ptr == NULL)
        return NULL;

        _memst(ptr , 0,nmemb * size);
            
        return ptr;
        }
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}


int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}

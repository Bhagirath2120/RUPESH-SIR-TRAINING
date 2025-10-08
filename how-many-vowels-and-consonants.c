#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "aiouabs";
    int ln = strlen(str);
    int Vcount = 0;
    int Ccount = 0;

    for (int i = 0; i < ln; i++)
    {
        if (str[i] == 'a' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i')
        {
            Vcount++;
        }
        else
        {
            Ccount++;
        }
    }
    printf("%d  %d", Vcount, Ccount);
}
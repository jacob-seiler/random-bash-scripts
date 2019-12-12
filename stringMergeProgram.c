#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *stringMerge(char *string1, char *string2)
{
    int len1 = strlen(string1);
    int len2 = strlen(string2);

    int total = len1 + len2;
    char *string = malloc(total * sizeof(char));

    for (int i = 0; i < total; i++)
    {
        if (i < len1)
            string[i] = string1[i];
        else
            string[i] = string2[i - len1];
    }

    return string;
}

int main()
{
    char string1[7] = "Happy ";
    char string2[9] = "Holidays";
    char *greeting = stringMerge(string1, string2);
    printf("%s\n", greeting);

    return 0;
}

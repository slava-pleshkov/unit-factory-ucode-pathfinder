#include "libmx.h"

char **mx_strsplit(const char *s, char c)
{
    int i = 0;
    int j = 0;
    int countlet = 0;
    char **new = NULL;

    if (!s)
        return NULL;
    else
    {
        new = (char **)malloc(sizeof(char *) * (mx_count_words(s, c) + 1));
        while (s[i])
        {
            if (s[i] != c)
            {
                countlet = mx_count_letters(&s[i], c);
                new[j] = mx_strndup(&s[i], countlet);
                j++;
                i += countlet;
            }
            i++;
        }
        new[j] = NULL;

        return new;
    }
}

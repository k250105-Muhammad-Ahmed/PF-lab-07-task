#include <stdio.h>
#include <string.h>

int main()
{
    int vowel = 0, consonants = 0;
    char str[] = "Default";

    printf("Enter your string:");
    scanf("%s", &str);

    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] != 0 || str[i] != '\0')
        {
            consonants++;
        }
    }
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonants);
    return 0;
}
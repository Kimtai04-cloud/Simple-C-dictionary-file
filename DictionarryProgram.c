#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct Entry
{
    char word[15];
    char definition[50];
};

bool IsEqual (const char str1[], const char str2[])
{
    int i = 0;    
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
          ++i;
    if (str1[i] == '\0' && str2[i] == '\0')
        return true;
    return false;         
}

int lookup (struct Entry Dictionary[], char word[], int entries)
{
    bool IsEqual (const char str[], const char str1[]); 
    for (int i = 0; i < entries; ++i)    
        if (IsEqual (Dictionary[i].word, word))
            return i;
        return -1;
}


int main (int argc, char *argv[])
{
    char Word[14];
    int entries = 11;
    struct Entry Dictionary[100] =  {
                                    {"Hello", "Greetings whose reply is also Hello"},
                                    {"aardvark", "a burrowing African Mammal"      },
                                    {"abyss",    "a bottomless pit"                },
                                    {"acumen",   "mentally sharp; keen"            },
                                    {"addle",    "to become confused"              },
                                    {"aerie",    "a high nest"                     },
                                    {"agar",     "a jelly made from seaweed"       },
                                    {"affix",    "to append; attach"               },
                                    {"ahoy",     "a nautical call of greeting"     },
                                    {"ajar",     "partially opened"                },
                                    {"introvert", "someone independent who does his/her work alone"}
                                    };
    if (argc < 2){
       fprintf(stderr, "You have not suplied the word\n");
       exit (1); 
    }
    int lookup (struct Entry Dict[], char Word[], int);                    
    int entry = lookup (Dictionary, argv[1], entries);

    if (entry == -1)
       printf ("Sorry The Word \"%s\" Is Not In This Dictionary\n", argv[1]);
    else{
       putchar ('\n'); 
       printf ("%s\n", Dictionary[entry].definition);
    }
    putchar('\n');                                   
    exit (EXIT_SUCCESS);
}

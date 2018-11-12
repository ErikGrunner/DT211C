/*
09/3/18
erik grunner
lab 16
problem 3/4
more srtings*/

#include <stdio.h>

//prototypes
void cat(char *,char *);
void lenght(char *);

main()
{

    char sentence1[50];
    char sentence2[50];
    char temp[] = "First word entered is ";

    printf("please enter first word");
    gets(sentence1);
    printf("please enter second word");
    gets(sentence2);

    if(strcmp(sentence1,sentence2)==0)
    {
        printf("words are the same\n");
    }
    else
    {
        printf("words aren't the same\n");
    }

    cat(temp,sentence1);
    lenght(temp);
}

void cat(char temp[],char sentence[])
{
    strcat(temp,sentence);
    puts(temp);
}

void lenght(char sentence[])
{
    int i;
    int characters = 0;
    for(i=0;i<strlen(sentence);i++)
    {
        if(*(sentence+i)!= ' ')
        {
            characters++;
        }
    }
    printf("\nThere are %d characthers in the sentence\n",characters);
}

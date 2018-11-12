/*
08/3/18
erik grunner
lab 16
problem 2
more srtings*/

#include <stdio.h>

int check(char *);

main()
{
    char sentence[50];
    char temp[] = "My sentence is : ";
    int characters = 0;
    int counter,i;


    printf("Please type is a sentence");
    gets(sentence);
    counter = check(sentence);

    printf("'\nis' is present %d times",counter);

    for(i=0;i<strlen(sentence);i++)
    {
        if(*(sentence+i)!= ' ')
        {
            characters++;
        }
    }
    printf("\nThere are %d characthers in the sentence\n",characters);
    strcat(temp,sentence);
    puts(temp);


}

int check(char sentence[])
{
        char is[3]="is";
        int counter =0;
        int i;

        if((sentence[0]=='i')&&(sentence[1]=='s')&&(sentence[2]==NULL))
        {
            counter++;
        }


        if((sentence[0]=='i')&&(sentence[1]=='s')&&(sentence[2]==' '))
        {
            counter++;
        }

        if((sentence[strlen(sentence)-3]==' ')&&(sentence[strlen(sentence)-2]=='i')&&(sentence[strlen(sentence)-1]=='s'))
        {
            counter++;
        }

        for(i=0;i<strlen(sentence);i++)
        {
            if((sentence[i]==' ')&&(sentence[1+i]=='i')&&(sentence[i+2]=='s')&&(sentence[i+3]==' '))
            {
                counter++;
            }
        }

        return counter;
}

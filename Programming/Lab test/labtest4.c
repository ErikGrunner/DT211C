/*
Erik Grunnér
12/04/2018
Lab Test 4
A program used to gather info on drivers to fill in their forms
there is a safety procaution if the user decideds anything isn't correct in their form
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date_of_birth
{
    int day;
    int month;
    int year;
};
struct licence
{
    char firstname[20];
    char surname[20];
    struct date_of_birth DOB;//date of birth is declared first so that it can be referenced here
    float height;
    char eye_colour[20];
    float weight;
};

//parameters
void data_entry(struct licence*);
void data_output(struct licence);

int main()
{
    char exit[10];
    struct licence person1;
    struct licence *p1 = &person1;//used to do pass by value
    struct licence person2;
    struct licence *p2 = &person2;
    do
    {
        data_entry(p1);
        data_output(person1);//pass by reference because I don't need to change anything
        printf("\nAre you satisfied that all field are correct?");
        scanf("%s",&exit);
    }
    while(strcmp(exit,"yes")!=0);//this just maeks sure the user is happy with the input
    do
    {
        data_entry(p2);
        data_output(person2);//pass by reference because I don't need to change anything
        printf("Are you satisfied that all field are correct?");
        scanf("%s",&exit);
    }
    while(strcmp(exit,"yes")!=0);
    return 0;
}//end main

void data_entry(struct licence *person)//this is where all questions are asked and data is gathered
{
    printf("Welcome to the Licencing Office\nWe need to gather some info to fill out your form\n");
    printf("Please enter your first name ");
    scanf("%s",&person->firstname);//arrow notation is needed due to the pointer
    printf("Please enter your Surname ");
    scanf("%s",&person->surname);
    printf("Please enter your DOB starting with the day ie 11 not monday ");
    scanf("%d",&person->DOB.day);
    printf("THen the month ");
    scanf("%d",&person->DOB.month);
    printf("And then the year");
    scanf("%d",&person->DOB.year);
    printf("Could you please enter your height(cm) ");
    scanf("%f",&person->height);
    printf("Could you please enter your eye colour ");
    scanf("%s",&person->eye_colour);
    printf("Could you please enter your weight(kg) ");
    scanf("%f",&person->weight);
}//end date entry

void data_output(struct licence person)//just displaying back what the user input
{
    printf("\nJust to read that all back to you");
    printf("\nFirst name:%s",person.firstname);
    printf("\nSurname:%s",person.surname);
    printf("\nDOB:%d/%d/%d",person.DOB.day,person.DOB.month,person.DOB.year);
    printf("\nHeight:%.1fcm",person.height);
    printf("\nEye Colour:%s",person.eye_colour);
    printf("\nWeight:%.1fKg",person.weight);
}//end data output

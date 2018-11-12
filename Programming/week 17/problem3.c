

/*
labs week 17
15/3/18
problem 3
structs
*/

#include <stdio.h>

struct date_of_birth//creating this first to be nested later
{
    int day;
    int month;
    int year;
};

struct citizen
{
    char firstname[20];
    char surname[20];
    struct date_of_birth DOB;//nested structure
    float height;
    float weight;
    char eye_colour[10];
    char country_of_citizenship[20];

};
//prototype
void data_entry(struct citizen *);//will e using pointers to pass by reference later
void data_output_stream(struct citizen);

main()
{
    struct citizen citizenKane;
    struct citizen *ptrK;
    ptrK = &citizenKane;//pointer for the pass by refernece
    struct citizen citizenBane;
    struct citizen *ptrB;
    ptrB = &citizenBane;

    data_entry(ptrK);
    data_output_stream(citizenKane);//pass by reference because I don't need to change anything
    memcpy(&citizenKane, &citizenBane, sizeof citizenKane);
    data_entry(ptrB);
    data_output_stream(citizenBane);
}

void data_entry(struct citizen *citizendefault)
{
    printf("\nWhat is your first name?");
    scanf("%s",&(citizendefault->firstname));
    printf("What is your surname?");
    scanf("%s",&(citizendefault->surname));
    printf("What day(int) were you born?");
    scanf("%d",&(citizendefault->DOB.day));
    printf("What month(int) were you born?");
    scanf("%d",&(citizendefault->DOB.month));
    printf("What year(int) were you born?");
    scanf("%d",&(citizendefault->DOB.year));
    printf("What is your height?");
    scanf("%f",&(citizendefault->height));
    printf("What is your weight?");
    scanf("%f",&(citizendefault->weight));
    printf("What is your eye colour?");
    scanf("%s",&(citizendefault->eye_colour));
    printf("What is your country of citizenship?");
    scanf("%s",&(citizendefault->country_of_citizenship));
}

void data_output_stream(struct citizen citizendefault)
{
    printf("%s %s\n",citizendefault.firstname,citizendefault.surname);
    printf("DOB: %d/%d/%d",citizendefault.DOB.day,citizendefault.DOB.month,citizendefault.DOB.year);
    printf("Height: %.2f\nWeight: %.2f",citizendefault.height,citizendefault.weight);
    printf("EyeColour: %s\nCountry of CitizenShip: %s",citizendefault.eye_colour,citizendefault.country_of_citizenship);

}


/*
erik grunner
22/3/18
LAbs week 17
data structures
problem 1
*/

#include <stdio.h>

struct air
{
    char airline[25];
    int flight_num;
    char surname[20];
    int seat_num;
    char destination[30];
    int bag_num;
};

void data_entry(struct air *);
void display(struct air);

int main()
{
    struct air passenger1,passenger2,passenger3;
    struct air *p1,*p2,*p3;

    p1 = &passenger1;
    p2 = &passenger2;
    p3 = &passenger3;

    data_entry(p1);
    display(passenger1);
    data_entry(p2);
    display(passenger2);
    data_entry(p3);
    display(passenger3);

    return 0;
}

void display(struct air ticket_info)
{
    printf("\nAirline:%s",ticket_info.airline);
    printf("\nFlight no.%d",ticket_info.flight_num);
    printf("\nPassenger: %s",ticket_info.surname);
    printf("\nSeat no.%d",ticket_info.seat_num);
    printf("\nDestination:%s",ticket_info.destination);
    printf("\nNo. of Bags:%d",ticket_info.bag_num);

}//end display

void data_entry(struct air *ticket_info)
{
    printf("\nEnter the airline name");
    scanf("%s",&(ticket_info->airline));
    fflush(stdin);
    printf("Please enter the flight number");
    scanf("%d",&(ticket_info->flight_num));
    printf("What is the surname of the passenger");
    scanf("%s",&(ticket_info->surname));
    printf("Please enter the seat number of the passenger");
    scanf("%d",&(ticket_info->seat_num));
    printf("Please enter the destination");
    scanf("%s",&(ticket_info->destination));
    printf("Please enter the number of bags required");
    scanf("%d",&(ticket_info->bag_num));

}//end data entry

/*
labs week 17
15/3/18
problem 1
structs
*/

#include <stdio.h>

struct cards
{
    int card_num;
    char Suit[10];
};
struct records
{
    int stock_num;
    char stock_desription[20];
    int stock_quantity;
};
struct library
{
    int isbn;
    char title[30];
    char author[250];
    float price;
};
struct customer
{
    unsigned int num;
    char name[50];
};

main()
{

}

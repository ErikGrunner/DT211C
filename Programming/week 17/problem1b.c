/*
labs week 17
15/3/18
problem 1b
structs
*/

#include <stdio.h>

struct stock_record
{
    int no;
    char description[21];
    float price;
    int qty;
};

struct stock_record stock_item;

main()
{
    stock_item.no = 1;
    stock_item.description[21] = "car";
    stock_item.price = 9.09;
    stock_item.qty = 2;

    printf("What is the stock num?");
    scanf("%d",&stock_item.no);
    printf("What is the description");
    fflush(stdin);
    gets(stock_item.description);
    printf("What is the price?");
    scanf("%f",&stock_item.price);
    printf("How many are left");
    scanf("%d",&stock_item.qty);


    printf("Item %d\n",stock_item.no);
    puts(stock_item.description);
    printf("\nPriced at %f,\n Only %d left",stock_item.price,stock_item.qty);
}

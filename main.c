#include<stdio.h>
#include<conio.h>
int nobi = 0, noc = 0, nob=0, amount = 0, count = 0;
void main()
{
    while(1)
switch(menu())
{
    case 1:
    bike();
    break;
    case 2:
    car();
    break;
    case 3:
    bus();
    break;
    case 4:
    showdetails();
    break;
    case 5:
    delete();
    break;
    case 6:
    exit(0);
    default: 
    printf("\n Invalid Choice:");
}
getch();
}
int menu()
{
    int ch;
    printf("\n 1. Enter Bike");
    printf("\n 2. Enter Car");
    printf("\n 3. Enter Bus");
    printf("\n 4. Show Status");
    printf("\n 5. Delete Data");
    printf("\n 6. Exit");
    printf("\n Enter your choice:");
    scanf("%d", &ch);
    return ch;
}
void showdetails()
{
    printf("\n number of bike = %d", nobi);
    printf("\n number of Car = %d", noc);
    printf("\n number of Bus = %d", nob);
    printf("\n total number of vehicles = %d", count);
    printf("\n total gain amount = %d", amount);
}
void delete()
{
    nobi=0;
    noc=0;
    nob=0;
    amount=0;
    count=0;
}
void bike()
{
nobi++;
amount = amount + 20;
count++;
}
void car()
{
noc++;
amount = amount + 50;
count++;
}
void bus()
{
nob++;
amount = amount + 100;
count++;
}
#include<stdio.h>
typedef struct
{
    /* 
    - creating user defined data type called customer to store details of a customer.
    - Mobile number, name, gender, date are in char data type
    - age unsigned int
    - list of items purchased would be 2d array of characters or to be simple it's array of strings
    */
   char mobile_no[10], name[20], gender, date[20][10], purchase_list[20][4];
   unsigned int age;
}customer;

void add_purchase_detail(customer *);

int main(void)
{
    customer *cust[10];
    add_purchase_detail(&cust);
    return 0;
}

//adding customer details

void add_purchase_detail(customer *c)
{
    static int i=5;
    c[0].name="Customer 1";
    printf("%s", c[0].name);
    return ;
}
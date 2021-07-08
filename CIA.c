#include<stdio.h>
#include<string.h>
typedef struct
{
    /* 
    - creating user defined data type called customer to store details of a customer.
    - Mobile number, name, gender, date are in char data type
    - age unsigned int
    - list of items purchased would be 2d array of characters or to be simple it's array of strings
    */
   char mobile_no[10], name[20], gender;
   unsigned int age;
   char date[20][10], purchase_list[20][4]; // dd/mm/yyyy  C101 C102 C103 C104 C105
}customer;

void add_purchase_detail(customer *);

int main(void)
{
    customer cust[10];
    add_purchase_detail(&cust);
    printf("\nThis is in main check %s\n%s", cust[1].mobile_no, cust[0].date[0]);
    return 0;
}

//adding customer details

void add_purchase_detail(customer *c)
{
    static int i=5;
    //c={"9876543210", "Customer1", 'M', 18, 22/02/1969, "C101"};
    strcpy(c[0].mobile_no, "9876543210");
    strcpy(c[0].name, "Customer1");
    c[0].gender='M';
    c[0].age=18;
    strcpy(c[0].date[0], "26/11/2008");
    strcpy(c[1].mobile_no, "8976543210");
    strcpy(c[2].mobile_no, "798654321");
    strcpy(c[3].mobile_no, "789654321");
    strcpy(c[4].mobile_no, "768954321");
}
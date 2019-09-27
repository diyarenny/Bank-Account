#include <stdio.h> 
#include <string.h> 
#define SIZE 100

struct bank_customer {
long account_num;
char name[3];
float balance;
};

long accNum;
int numCustomers;

int getBankSize();
void inputCustomers(int, struct bank_customer *); 
void displayCustomer(int, struct bank_customer *);
void displayCustomer(long accNum);
int getTotal(int, struct bank_customer *);
struct bank_customer bank[SIZE]; 

int main() {

float total=0.0;


numCustomers=getBankSize(); 
inputCustomers(numCustomers, bank);
displayCustomer(numCustomers, bank); 
displayCustomer(accNum); 
total=getTotal(numCustomers, bank); 
printf("Total balance in bank = %f\n", total);
} //end main


int getBankSize()
{
int sizeOfBank; do
{
    printf("Enter the number of bank customers (<100)");
    scanf("%d",&sizeOfBank);
} while (sizeOfBank < 0 || sizeOfBank > SIZE);

return (sizeOfBank); } //end getBankSize


void inputCustomers(int num, struct bank_customer *bank)
{
int index;
for (index=0; index<num; index++)
{
    
printf("Enter account number for customer %d:", index+1);
scanf("%ld", &bank[index].account_num); 



printf("Enter account Name for customer %d:", index+1);
fflush(stdin);
scanf(" %s", &bank[index].name); 


printf("Enter account Balance for customer %d:", index+1);
scanf("%f", &bank[index].balance); 


//etc.
}
} //end for


void displayCustomer(int num,
struct bank_customer *bank)
{ 
int i;
for (i=0; i < num; i++)
{
if (bank[i].balance < 0)
{
printf("Account Num : %ld\n", bank[i].account_num);
printf("Name : %s\n", bank[i].name); 
printf("Balance : %f\n", bank[i].balance); 

} //end if
} //end for
} // end displayCustomer

void displayCustomer(long accNum) {
  
    printf("Please enter account number \n");
    scanf("%d", &accNum );
    int i;
    for (i=0; i < numCustomers; i++)
     {
     if (bank[i].account_num == accNum)
     {
         
    printf("Account Num : %ld\n", bank[i].account_num);
    printf("Name : %s\n", bank[i].name); 
    printf("Balance : %f\n", bank[i].balance); 

      } //end if
} //end for

    
}

int getTotal(int num, struct bank_customer *bank) {
int index; 
float total = 0.0;
for (index=0; index<num; index++)
total+=bank[index].balance; 
return total;
} //end getTotal

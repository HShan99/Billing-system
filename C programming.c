#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
void main(){
int qnt[10],i,j;
int option;
float rate[10],price[10],total=0,discount=0,gtotal=0;
char n[10][25] ;
char x;
char name[10];
printf("\n\t\t==================================================================\n");
printf("\n\t\t\t\t\t NEW DEVAN RESTURANT\n");
printf("\n\t\t==================================================================\n\n");
printf("\n\t\t1.Generate invoice");
printf("\n\t\t2.Resturant details");
printf("\n\t\t3.Exit\n");
printf("\n\n\t\tPlease select your choice :\t\t\t");
scanf("%d",&option);
switch(option)
{
case 1:
    for(i=1;i<=10;i++){
        gets(n[i]);
        printf("\n\n");
        printf("\t\tPlease enter the item %d name: \t\t\t",i);
        gets(n[i]);
        printf("\t\tPlease enter the quantity: \t\t\t");
        scanf("%d",&qnt[i]);
        printf("\t\tPlease enter the unit price: \t\t\t");
        scanf("%f",&rate[i]);
        price[i]=rate[i]*qnt[i];
        j=i;
        total=total+price[i];
        discount=total*0.1;
        gtotal=total-discount;
        printf("\t\tYou want to add more (Y/N) : \t\t\t");
        scanf("\t%c",&x);
        if(x=='n')
            {
            printf("\n\t\tPlease enter the name of the customer:\t\t");
            scanf("%s",&name);
            break;
            }

        }
    printf("\n\n\t\t\t\t\t\t CASH RECEIPT ");
    printf("\n\t\t\t\t\t\t--------------");
    printf("\n\t\t Invoice To: Mr/Mrs.%s",name);
    printf("\n");
    {
    time_t time1;
    time(&time1);
    printf("\t\t Date:");
    printf("%s",ctime(&time1));
    }
    printf("\t\t -----------------------------------------------------------------");
    printf("\t\n\t\t Product \tQuntity \tRate\t\t\tPrice");
    printf("\n \t\t -----------------------------------------------------------------");


    for(i=1;i<=j;i++)
    {
        printf("\n\t\t %s \t\t%d \t\t%0.2f\t\t\t%0.2f",n[i],qnt[i],rate[i],price[i]);
    }
    printf("\n\n\n\n\n");
    printf("\n \t\t -----------------------------------------------------------------");
    printf("\n\t\t Sub Total\t\t\t\t\t\t%0.2f",total);
    printf("\n\t\t Discount @10\t\t\t\t\t\t%0.2f",discount);
    printf("\n \t\t\t\t\t\t\t\t       -----------");
    printf("\n\t\t Grand Total \t\t\t\t\t\t%0.2f",gtotal);
    printf("\n \t\t\t\t\t\t\t\t       -----------");
    printf("\n \t\t\t\t\t\t\t\t       -----------");
    getch();
    printf("\n\n\n\n\t\t\t\t**********Thank you come again**********");
    printf("\n\n");
    printf("\n\n");
    printf("\t\tEnter any key :");
    printf("\n\n\n\n");
    break;
case 2:
    printf("\n\t\t==================================================================\n");
    printf("\t\t\t\t\t DETAILS OF THE RESTURANT");
    printf("\n\t\t==================================================================\n");
    printf("\n\n");
    printf("\t\tResturant name: NEW DEVAN RESTURANT\n");
    printf("\n\t\tAddress: No95/2,\n\t\t\t King pedhesa, \n\t\t\t Matale.");
    printf("\n\n\t\tHotline: 0661234567\n");
    printf("\n\t\tEmail: newdevan@gmail.com\n");
    printf("\n\t\tOwner: Mr.Chandrasena\n");
    printf("\n\t\tRegister No: 3422433455DEWC\n");
    printf("\n");
    printf("\n\t\tBranches ");
    printf("\n\t\t--------");
    printf("\n\n\t\tNEW DAVAN RESTURANT \n\t\tKurunagala \n\t\t0117868545\n");
    printf("\n\t\tNEW DAVAN RESTURANT \n\t\tKandy \n\t\t0667868545\n");
    printf("\n\t\tNEW DAVAN RESTURANT \n\t\tDambulla \n\t\t0667838445\n");
    printf("\n \t\t-----------------------------------------------------------------");
    printf("\n\t\t******************************************************************\n");
    printf("\n\n\n");
    printf("\t\tEnter any key :");
    printf("\n\n\n\n");

    break;
case 3:
    printf("\n\n\n\n");
    printf("\n\t\t==================================================================\n");
    printf("\n\t\t\t\t*******THANK YOU COME AGAIN******* ");
    printf("\n\t\t==================================================================\n");
    printf("\n\n\n\n");
    printf("\t\tEnter any key :");
    printf("\n\n\n\n");

    break;
default:
    printf("\n\n\n\n");
    printf("\n\t\t==================================================================\n");
    printf("\t\t\t\t\t    Invalid input");
    printf("\n\t\t==================================================================\n");
    printf("\n\n\t\tEnter any key :");
    printf("\n\n\n\n");

    break;
}
}





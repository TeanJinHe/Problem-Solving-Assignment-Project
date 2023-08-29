#include <stdio.h>
int main()
{
char Client_Name[30], Address[50], Country_Code, Type_of_Glove[20], Glove_Code, Colour[10], Size[5], Bill_Date[20];
int Control,Quantity, Total_Quantity=0;
float Price, Shipping_Fee, Total_Price=0, Total_Payment;
printf("Enter Client Name : "); //Enter Client Name
fflush(stdin);
gets(Client_Name); //Client_Name
printf("Enter Address : "); // Enter Address
gets(Address); //Address
printf("Enter Bill Date : ");
fflush(stdin);
gets(Bill_Date);
printf("===========================================================\n");
do
    {
    printf("\nEnter Glove Code (L= Latex, N= Nitrile ,V= Vinyl): "); //Enter Glove Code
    scanf(" %c",&Glove_Code); //Glove_Code
    fflush(stdin);
    printf("Enter Colour :"); //Enter Colour
    fflush(stdin);
    gets(Colour); //Colour
    printf("Enter Size : ");
    scanf(" %s",&Size); //Size
    printf("Enter Quantity: "); //Enter Quantity
    scanf("%d",&Quantity); //Quantity
        {
        if(Glove_Code =='L')
            {
            printf("Type of Glove : Latex\n");
            Price= Quantity*130;
            }
        else if(Glove_Code =='N')
            {
            printf("Type of Glove : Nitrile\n");
            Price= Quantity*185;
            }
        else
            {
            printf("Type of Glove : Vinyl\n");
            Price= Quantity*220;
            }
        }//End If
	printf("Price : RM%.2f",Price); //Price
	Total_Quantity = Total_Quantity+ Quantity;
	Total_Price = Total_Price+ Price;
	printf("\nTotal Price : RM%.2f",Total_Price); //Total_Price
	printf("\nAnymore order (1= Yes/ 0= No)? : ");
	scanf("%d",&Control); //Control
    }
while (Control!=0); //End Do While
printf("===========================================================\n");
printf("Enter Country Code (T= Thailand, I= Indonesia, P= Philippines) : ");//Enter Country Code
scanf(" %c", &Country_Code);//Country_Code
    {
    if (Country_Code == 'T')
      {
        if (Total_Quantity<200)
            Shipping_Fee = 75;
	    else if (Total_Quantity<400)
            Shipping_Fee = 105;
	    else if (Total_Quantity<600)
            Shipping_Fee = 135;
        else
            Shipping_Fee = 150;
      }//End If
    else
      {
        if (Total_Quantity<200)
            Shipping_Fee = 90;
        else if (Total_Quantity<400)
            Shipping_Fee = 120;
	    else if (Total_Quantity<600)
            Shipping_Fee = 150;
	    else
            Shipping_Fee = 180;
      }//End IF
    }//End IF
Total_Payment = Total_Price + Shipping_Fee;
printf("\nTotal Quantity : %d",Total_Quantity); //Total Quantity
printf("\nShipping Fee : RM%.2f",Shipping_Fee); //Shipping_Fee
printf("\n===========================================================\n");
printf("\nTotal Payment: RM%.2f ",Total_Payment); //Total Payment
return 0;
}


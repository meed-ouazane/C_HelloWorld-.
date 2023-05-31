#include <stdio.h>


float PD (float NewPrice, float OldPrice)
{
float Dif;
       Dif = ((NewPrice - OldPrice)/ OldPrice)*100;
       return Dif;
}

int main(){
       float NP, OP ;

       printf("Please enter New Price of that product :");
       scanf ("%f",&NP);

       printf("Please enter Old Price of that product :");
       scanf ("%f",&OP);

       float Dif = PD(NP, OP);
       printf ("%.2f%%\n", Dif);       

       return 0;
}

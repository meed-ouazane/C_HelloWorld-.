#include <stdio.h>

int main() {
  
     float Money, MoneyR, MoneyD, Div, Widow;
     int Men, Women;

     printf("Please enter the sum Money you to divide :");
     scanf("%f",&Money);
     printf("Please enter the number of Men in this family :");
     scanf("%d",&Men);
     printf("Please enter the number of Women in this family :");
     scanf("%d",&Women);
     Widow = Money / 8;
     MoneyR = Money - Widow;
     Div = Women + (Men *2);
     MoneyD = MoneyR / Div; 
        printf("Women will get in that inheritance : %.2f\n", MoneyD);
	printf ("Men will get in that inheritance : %.2f\n", MoneyD*2);
	printf("The widow will get in that inheritance :%.2f\n ",Widow);
     return 0;

}

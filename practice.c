


/*practice1:. একটা প্র োগ্রাম লি খ যে টা ত োমার উচ্চতা ইনপুট নি বে ইঞ্চি তে , তারপর সে টাকে ফুট আর ইঞ্চি

 ফরম্যাট এ আউটপুট দি বে ।

Example:
Enter height is inches: 65
Your height is 5 feet 5 inches
*/

#include<stdio.h>
int main(){

   float inches;
   printf("Enter height in inches:");
   scanf("%f", &inches);
   int feet = inches* 0.083333;
   float height= inches /12;

   printf("Your height is %.0f feet",height);
   printf(" %d inches",feet);

    return 0;




}

#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF;
  int userinputC;
  int userinputRupee;
  int userinputpound;
  int fahrenheitToCelcius;
  int celciusToFahrenheit;
  float RupeetoEURO ;
  float RupeetoJPY;
  float RupeetoUSD ;
  float Poundstokg;
  float Poundstograms;
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  char cat=tolower(category);
  if(cat == 't'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(cat == 'c') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Rupee to Euro. \n");
      printf("Enter 2 for Rupee to JPY. \n");
      printf("Enter 3 for Rupee to USD. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the Rupee amount: \n");
          scanf("%d",&userinputRupee);
          RupeetoEURO = userinputRupee * 0.011;
          printf("Euro: %.2f",RupeetoEURO);
      }
      else if(currencyChoice == 2){
          printf("Please enter the Rupee amount: \n");
          scanf("%d",&userinputRupee);
          RupeetoJPY = userinputRupee * 1.61;
          printf("JPY: %.2f",RupeetoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the Rupee amount: \n");
        scanf("%d",&userinputRupee);
        RupeetoUSD = userinputRupee * 0.012;
        printf("RMB: %.2f",RupeetoUSD);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(cat == 'm'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for kilogram to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the pound amount: \n");
          scanf("%d",&userinputpound);
          Poundstokg = userinputpound * 0.454;
          printf("Pounds: %.2f",Poundstokg);
      }
      else if(massChoice == 2) {
          printf("Please enter the pound amount: \n");
          scanf("%d",&userinputpound);
          Poundstograms = userinputpound * 453.592;
          printf("Pounds: %.2f",Poundstograms);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}

#include<stdio.h>
int main()
{
    int ch;
    printf("enter the number between 1 to 5 \n");
    scanf("%d",&ch);
    switch(ch)
    {case 1:
      printf("FOOD ITEM- PIZZA \nPRICE- RS 239");
      break;
    case 2:
      printf("FOOD ITEM- PASTA \nPRICE- RS 179");
      break;  
    case 3:
      printf("FOOD ITEM- SANDWICH \nPRICE- RS 149");
      break;
    case 4:
      printf("FOOD ITEM- BURGER \nPRICE- RS 129");
      break;  
    case 5:
      printf("FOOD ITEM- FRENCH FRIES \nPRICE- RS 99");
      break;
    default:
      printf("wrong input");
      break;
    }
return 0;
}

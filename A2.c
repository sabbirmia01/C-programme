#include<stdio.h>
int main()
{

   int a, b,c, average;

   printf("Enter your marks in three subjects:");
   scanf("%d %d %d", &a,&b,&c);

   average = (a+b+c)/3;


   if (average >=80)
    {
        printf("Grade A");

    }

    else if(average >=70)
    {
        printf("Grade A");
    }
    else if(average >=60)
    {
        printf("Grade -A");
    }
    else if (average >=50)
    {
        printf("Grade B");
    }

    else if (average >=40)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }


return 0;    
}
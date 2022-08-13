/* Nested if Statements #24 - an insurance comany to provide loan to given criteria  (person shuld be married, (if unmarried->male->age 40>)
(female -> age 35> ) */
#include <stdio.h>

int main()
{
   
   char ms, gender;
   int age;
   
   printf("Enter Marital status (m/u) = ");
   scanf("%c", &ms);
   fflush(stdin);
   printf("Enter you Gender (M/F) = ");
   scanf("%c", &gender);
   fflush(stdin);
   printf("Enter you Age = ");
   scanf("%d", &age);
   
   if(ms=='m')
         printf("Insurance Provided");
    
    else
        if(ms=='M')
            if(age>=40)
            printf("Insurance Provided");
            
            else
            printf("Insurance Not Provded");
            
        else
            if(ms=='F')
                if(age>=35)
                    printf("Insurance  Provided");
                else
                    printf("Insurance Not Provided");
   
    
        
    return 0;
}

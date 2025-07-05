// Accept a string from user and accept one character from user and reverse the string 


# include<stdio.h>
# include<stdbool.h>

void ReverseString (char *Arr)
{
   int iCnt = 0 ;
   int iCount = 0 ;
   int iRet = 0 ; 
   
   while (*Arr != '\0')
   {
      iCount++ ;
      Arr++ ; 
   }
   Arr-- ;

   for (iCnt = 0 ; iCnt < iCount ; iCnt++ , Arr-- )
   {
        printf("%c",*Arr) ;
   }
  
}
int main ()
{
  
  char ch1 [20] ;
  
  printf(" enter the string \n") ;
  scanf("%[^'\n']",ch1) ;

  ReverseString (ch1) ;


   return 0 ;
}
// Accept a string from user and accept one character from user and return the frequency of that character 


# include<stdio.h>
# include<stdbool.h>

int CheckCharacter (char *Arr , char ch ) 
{

   int iRet = 0 ; 


   while (*Arr != '\0')
   {
      if (*Arr == ch )
      {
        iRet ++ ;
      }
      
       Arr++ ;
   }
  
   return iRet ;
}
int main ()
{
  int iRet = 0 ;
  char ch1 [20] ;
  char ch2 ;

  printf(" enter the string \n") ;
  scanf("%[^'\n']",ch1) ;

  printf(" enter the Character \n") ;
  scanf(" %c",&ch2) ;


  iRet = CheckCharacter (ch1,ch2) ;

  printf(" the frequency of character is : %d ",iRet) ; 


   return 0 ;
}
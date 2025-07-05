// Accept a string from user and accept one character from user and check wether the character is present or not 


# include<stdio.h>
# include<stdbool.h>

bool CheckCharacter (char *Arr , char ch ) 
{
   bool bRet = false ; 

   while (*Arr != '\0')
   {
      if (*Arr == ch )
      {
         bRet = true ;
      }
      
       Arr++ ;
   }
  
   return bRet ;
}
int main ()
{
  bool bRet = false ;
  char ch1 [20] ;
  char ch2 ;

  printf(" enter the string \n") ;
  scanf("%[^'\n']",ch1) ;

  printf(" enter the Character \n") ;
  scanf(" %c",&ch2) ;


  bRet = CheckCharacter (ch1,ch2) ;

  if (bRet == true )
  {
    printf("the character is present in string ") ;
  }
  else 
  {
    printf("the character is not present in string ") ;
  }


   return 0 ;
}
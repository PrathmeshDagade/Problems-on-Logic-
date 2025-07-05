// Accept a string from user and accept one character from user and return last occurance of that character 


# include<stdio.h>
# include<stdbool.h>

int CheckCharacter (char *Arr , char ch ) 
{
    int index = 0  ;
   int iCnt = 0 ;
   int iRet = 0 ; 

   while (*Arr != '\0')
   {
      if (*Arr == ch )
      {
         index = iCnt ;
      }
       iCnt++ ;
      
       Arr++ ;
   }
  
   return index ;
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

  printf(" the last occurance is : %d ",iRet) ; 


   return 0 ;
}
// Accept string from user and count number and check wether it contains vowels in it or not 

// input : prathmesh 

// Output : true

// input : Xyz  

// output : false 


# include <stdio.h>
# include <stdbool.h>

void Display (char *Str )
{
    
  int iCount = 0 ;     // we will get the number charactes into the string 
  int iCnt = 0 ; 

  while ( *Str != '\0')  // string will start and will end at \0 ;
  {
    iCount++ ; 
    Str++ ;    // to get forward the single characters 
  }
  Str--  ; // in the end wil - \0 


  for ( iCnt = iCount ; iCnt > 0 ; iCnt -- , Str-- ) 
  {
    printf("%c",*Str) ;
  }
  printf("\n") ;

}

int main ()
{
  char Arr [50] = { '\0' } ; 
   

  printf(" The the String : \n ") ;
  scanf("%[^'\n']s",Arr) ;
  
  Display (Arr) ;


    return 0  ;

}
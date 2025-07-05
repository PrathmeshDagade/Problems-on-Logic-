// Accept string from user and count number and check wether it contains vowels in it or not 

// input : prathmesh 

// Output : true

// input : Xyz  

// output : false 


# include <stdio.h>
# include <stdbool.h>

bool CheckVowels(char *Str )
{

    bool bRet = false ; 

    while (*Str != '\0')
    {
        if ((*Str == 'A' ) || ( *Str == 'E') || ( *Str == 'I') || ( *Str == 'O') || ( *Str == 'U') || ( *Str == 'a') || ( *Str == 'e') || ( *Str == 'i') || ( *Str == 'o') || ( *Str == 'u'))
        {
            bRet = true ;
        }
        Str++ ;
    }

    return bRet ; 
}

int main ()
{
  char Arr [50] = { '\0' } ; 
  bool bRet = false ; 

  printf(" The the String : \n ") ;
  scanf("%[^'\n']s",Arr) ;
  
  bRet = CheckVowels (Arr) ;

  if ( bRet == true )
  {
    printf(" vowels are present in string ") ;
  }
  else 
  {
    printf(" vowels is not present in string ") ;
  }

    return 0  ;

}
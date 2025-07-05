// accept a string from user and display the white spaces from it   


# include<stdio.h>

void DisplayWhiteSpaces(char *Arr)
{
    int iCount = 0 ;
  while (*Arr != '\0')
  {
    if ( *Arr == 32)
    {
        iCount++ ;
    } 
    Arr++ ;
  }

  printf(" the count of white spaces are %d : \n ",iCount) ;

}
int main ()
{
    char ch [20] ; 

    printf(" enter the string : \n ") ;
    scanf("%[^'\n']s",ch) ;

    DisplayWhiteSpaces(ch) ;

    return 0 ;
}
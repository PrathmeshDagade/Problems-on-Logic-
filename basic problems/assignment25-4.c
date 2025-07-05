// accept a string from user and display if it contains any number in it  


# include<stdio.h>

void DisplayNumber(char *Arr)
{
  while (*Arr != '\0')
  {
    if (( *Arr >= '0' ) && (*Arr <= '9' )) 
    {
        printf("%c",*Arr) ;
    } 
    Arr++ ;
  }

}
int main ()
{
    char ch [20] ; 

    printf(" enter the string : \n ") ;
    scanf("%[^'\n']s",ch) ;

    DisplayNumber(ch) ;

    return 0 ;
}
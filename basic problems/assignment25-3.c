// accept a string from user and toggle it 


# include<stdio.h>

void strtogglex(char *Arr)
{
  while (*Arr != '\0')
  {
    if (( *Arr >= 'A') && (*Arr <= 'Z' )) 
    {
        *Arr = *Arr + 32 ;
    } 
    else if (( *Arr >= 'a') && (*Arr <= 'z' ))
    {
        *Arr = *Arr - 32 ;
    }
    Arr++ ;
  }

}
int main ()
{
    char ch [20] ; 

    printf(" enter the string : \n ") ;
    scanf("%[^'\n']s",ch) ;

    strtogglex(ch) ;

    printf(" the updated string is %s : \n ",ch ) ;

    return 0 ;
}
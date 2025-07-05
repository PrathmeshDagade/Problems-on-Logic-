// accept string from user and convert it into upper case 

# include<stdio.h>
# include<string.h>


void struprx ( char *Arr)
{
    while (*Arr != '\0')
    {
        if ((*Arr >= 'a') && ( *Arr <= 'z'))
        {
            *Arr = *Arr - 32 ;
        }
        Arr++ ;
    }

}
int main ()
{

  char ch [50] ; 

  printf("enter the string : \n") ;
  scanf("%[^'\n']s",ch) ;

  struprx(ch) ;

  printf(" the updated string is  %s : ",ch) ;



    return 0 ;
}
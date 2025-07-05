// Accept a string from user and convert it into lower case ; 

# include <stdio.h>
# include <string.h>


void strlwrx(char *Arr)
{
    
    while (*Arr != '\0')
    {
        if ((*Arr >= 'A') && ( *Arr <= 'Z'))
        {
            *Arr = *Arr + 32 ; 

        }
        Arr++ ;
    }
    

}

int main ()
{
    char ch[20] ;
    
    printf(" enter the string to convert into lower case \n ") ;
    scanf("%[^'\n']s",ch) ;


    strlwrx(ch) ;

    printf(" the updated string is : %s ",ch) ;

    return 0 ;
}
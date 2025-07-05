/*
Accept string from user and count number of capital charcters 
*/

// input : Prathmesh DagaDe 
// output : 3 


# include <stdio.h>


int CountCapital ( char *Str )
{
    int iCnt = 0 ;

    while(*Str != '\0' )
    {
        if ((*Str >= 'A' ) && ( *Str <= 'Z' ))
        {
            iCnt++ ; 
        }
        Str++ ;
    }
    return iCnt ;
}

int main ()
{
    char ch[50] ; 
    int iRet = 0 ; 
    
    printf(" enter string  : ");
    scanf("%[^'\n']s",ch);

    iRet = CountCapital (ch) ;

    printf( " the capital characters in string are  : %d ",iRet) ;

    return 0 ;
}
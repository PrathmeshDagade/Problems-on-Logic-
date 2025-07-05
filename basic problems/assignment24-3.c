// Accept string from user and count number and return diffrence between small character and big character 

// input : Prathmesh 

// Output : (8-1) = 7 

# include<stdio.h>

int Diffrence (char *Str )
{
    int iSmall = 0 ; 
    int iBig = 0 ; 
    int iRet = 0 ; 

    while (*Str != '\0' )
    {
        if ((*Str >= 'a') && ( *Str <= 'z'))
        {
            iSmall++ ; 
        }
        else if ((*Str >= 'A') && ( *Str <= 'Z'))
        {
            iBig++ ;
        }
        Str++ ;
    }

    iRet = iSmall - iBig ;

    return iRet ; 

}

int main ()
{

    char Arr[50] = { '\0' } ; 
    int  iRet = 0 ; 

    printf("enter the string : \n") ;
    scanf("%[^'\n']s",Arr) ;

    iRet = Diffrence (Arr) ; 

    printf(" hte diffrence of small and big character is : %d ",iRet ) ;

    return 0 ; 

}
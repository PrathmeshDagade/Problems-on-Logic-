// Accept string from user and count number of smalll character frm user 

// input : Prathmesh 

// Output : 8


# include <stdio.h>
int CountSmall( char *Str)
{
    int iCnt  = 0 ; 

    while (*Str != '\0')
    {
        if((*Str >= 'a')&&(*Str <= 'z'))
        {
            iCnt++ ;
        }
        Str++ ;
    }

    return iCnt ;
}

int main ()
{
   char Arr [50] = {'\0'} ;
   int iRet = 0 ;
   
   printf("Enter the String \n : ") ; 
   scanf("%[^'\n']s",Arr) ;

   iRet = CountSmall(Arr) ;

   printf(" the number of small characters are : %d ",iRet ) ; 



    return 0 ;
}
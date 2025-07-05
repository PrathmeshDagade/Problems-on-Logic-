// write a program which will accept a character and check wether it is capital or not ( A - Z)

// input : A 
// output : true 

// input : a
// output : false 

# include <stdio.h>
# include <stdbool.h>

bool CheckCapital ( char Character )
{
   bool cRet = false ; 

    if (( Character >= 65 ) && (Character <= 90 ))
    {
        cRet = true ;
    }

    return cRet ;
}

int main ()
{
    char cChar = '\0' ;
    bool cRet = false ;

    printf(" Enter the Character to check wether it is Capital or not : ");
    scanf("%c",&cChar);

    cRet = CheckCapital (cChar) ; 

    if (cRet == true )
    {
        printf(" %c  : this is a Capital character ",cChar);
    }
    else 
    {
          printf(" %c  : this is not a Capital character ",cChar);
    }
    return 0 ;
}



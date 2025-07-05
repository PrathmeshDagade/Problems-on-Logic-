//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment4-1.c 
// File Discription : program which accepts 1 number from user and display diffrence between summation of all its factors and nonfactors
// Date : 17.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void FactDiff 
//  Function Discription : function is used to perform diffrence between sumation of all its factors and non factors  
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

int FactDiff(int iNo)
{
    
    int iCnt = 0 ;
    int iSum1 = 0 ;
     int iSum2 = 0 ;
                    
    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
       if (( iNo % iCnt ) != 0)
        {
           iSum2 = iSum2 + iCnt ;
        }
        if (( (iNo/2) % iCnt ) == 0)
        {
            iSum1 = iSum1 + iCnt ;
        }
    }

    return  iSum1-iSum2;
}
int main ()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0 ;
}
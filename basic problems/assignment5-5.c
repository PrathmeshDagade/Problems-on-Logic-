// input : 4
// output :  print 5 multiples of n number  

# include <stdio.h>
void Display (int iNo)
{
    int iCnt = 0 ;
    int iSum = 1 ;
    
    if ( iNo < 0 )
    {
        iNo = -iNo ;
    }

    for (iCnt = 1 ; iCnt <= 5 ; iCnt++ )
    {
       iSum  = iCnt * iNo ;
        printf("%d\t",iSum);
    }
}
int main ()
{
 int iValue = 0 ;
 printf("Enter the value \n");
 scanf("%d",&iValue);
 
 Display(iValue);
 
    return 0 ;
}
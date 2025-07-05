// input : less than 50 
// output :  print small number 

// input : greater than 50  and less than 100 
// output : medium 

// input : if 100 
// output : large number 


# include <stdio.h>
void Display (int iNo)
{
    int iCnt = 0 ;
    
    if ( iNo > 100 )
    {
        printf("please number in between 100 \n");
        return  ;
    }

    if ( iNo < 50 ) 
    {
        printf(" %d : the number is small \n ",iNo);
    }
    else if (( iNo >= 50 )&&(iNo < 100))
    {
        printf(" %d : the number is medium \n ",iNo);
    }
    else if ( iNo == 100 )
    {
        printf(" %d : the number is larger \n ",iNo);
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
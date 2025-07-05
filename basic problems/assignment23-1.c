/* 
wrute a program which display ASCII table . Table Contains Symbol Decimal Hexadecimal 
and Octal representation of every member from 0 to 225 .

*/

# include<stdio.h>

void DisplayASCII ()
{
    int iNo = 0 ;
    char ch = '\0' ;


 for ( iNo == 1 ; iNo <= 225 ; iNo++,ch++ )
 {
    printf(" %d \t   %c  \t  0x%X  \n ",ch,ch,ch);
 }

}
int main ()
{
    DisplayASCII () ;
    return 0 ;
}
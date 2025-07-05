/*accept Division of student from user and depends on the division display exam timing there are 4 divisions in school as A,B,C,D .
  Exam of division A at 7Am , B at 8:30 AM  , C at 9:20 AM and D at 10:30 AM .
   ( Application should be Case insensitive)
*/
// input : C
// output : Your Exam at 9:20 AM 

// input : d
// output : Your Exam at 10:30 AM 

# include <stdio.h>


void DisplaySchedule ( char DivCharacter )
{

    if ((((DivCharacter  > 68 ) && (DivCharacter  < 90  ))) || (((DivCharacter  > 100 ) && (DivCharacter  < 122 ))))
    {
        printf(" enter devision in betwwen ( A - D ) ") ;
        return ;
    }


    if ((DivCharacter  == 65 ) || (DivCharacter  == 97 ))
    {
       printf(" Your exam at 7:00 AM ") ;
    }
    else if ((DivCharacter  == 66 ) || (DivCharacter  == 98 ))
    {
        printf(" Your exam at 8:30 AM ") ;
    }
    else if ((DivCharacter  == 67 ) || (DivCharacter  == 99 )) 
    {
        printf(" Your exam at 9:20 AM ") ;
    }
    else if ((DivCharacter  == 68 ) || (DivCharacter  == 100 )) 
    {
        printf(" Your exam at 10:30 AM ") ;
    }
   
}

int main ()
{
    char cChar = '\0' ;
   
    printf(" enter character to check the exam schedule : ") ;
    scanf("%c",&cChar);

    DisplaySchedule (cChar) ; 

    return  0 ;
}
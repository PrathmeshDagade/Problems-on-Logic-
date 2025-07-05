// write a program wich accepts width and height of rectangle from user and calculate its area ( Area = width * height ) 


# include <stdio.h>


double AreaOfRectangle( float Width , float Height )
{
  double Area = 0.0 ; 

   Area = Width * Height ;

    return Area ;
}

int main ()
{
    float fWidth= 0.0f , fHeight = 0.0f ;

    double iRet = 0.0 ; 


    printf(" Enter the width of a rectangle  \n");
    scanf("%f",&fWidth );
    
    printf(" Enter the height of a rectangle  \n");
     scanf("%f",&fHeight);

   iRet = AreaOfRectangle(fWidth,fHeight);

    printf(" The Area of a rectangle  is : %f \n ",iRet);


    return 0 ;
}
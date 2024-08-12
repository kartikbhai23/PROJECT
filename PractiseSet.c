#include<stdio.h>

//CODE TO FIND AREA OF RECTANGLE

int main() {
    
    printf("CALCULATING AREA OF RECTANGLE\n ");

int a; 
int b;
   
    printf("enter the width:");
    scanf("%d", &a);

    printf("enter the height:");
    scanf("%d", &b);

    printf("THE AREA OF RECTANGLE IS %d", a*b);

    //PERIMETER OF RECTANGLE 

    printf("\nCALCULATING OF PERIMETER OF RECTANGLE \n");

int c;
int d;

printf("enter the wdth: ");
scanf("%d", &c);

printf("enter the length: ");
scanf("%d", &d);

printf("THE PERIMETER IS %d", 2*(c+d));

}
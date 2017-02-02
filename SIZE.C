//Program to display the size of each data type
#include<stdio.h>
void main()
{
	printf("\nSizeof int %d",sizeof(int));
	printf("\nSizeof float  %d",sizeof(float));
	printf("\nSizeof double  %d",sizeof(double));
	printf("\nSizeof char %d",sizeof(char));
	printf("\nSizeof long %d",sizeof(long));
	printf("\n\n\nSizeof Integer Pointer %d",sizeof(int*));
	printf("\nSizeof CharPointer %d",sizeof(char*));
	printf("\nSizeof FloatPinter :%d",sizeof(float*));
	getch();
}
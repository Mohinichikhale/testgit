#include<stdio.h>

int main()
{
int totalnorow, space, row, j;
printf("Enter number of rows: ");
scanf("%d",&totalnorow);
for(row = 1; row <= totalnorow ; row++)
{
//for loop for displaying space
for(space = row; space < totalnorow; space++)
{
printf(" ");
}
//for loop to display star equal to row number
for(j = 1; j <= (2 * row - 1); j++)
{
printf("*");
}
// ending line after each row
printf("\n");
}
}

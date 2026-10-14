#include <stdio.h>
void main()
{
int marks;
printf("\nEnter marks: ");
scanf("%d", &marks);
if(marks<=40)
{
printf("Student Status: Fail");
}
else if(marks<=75)
{
printf("Student Status: Average");
}
else
{
printf("Student Status: Excellent");
}
getch();
}
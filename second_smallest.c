#include <stdio.h>
#include <conio.h>
void main()
{
  clrscr();
  int a[5];
  int i,min=a[0],ss=1000;
  	for(i=0; i<5; i++)
      {
        printf("\n enter array");
        scanf("%d",&a[i]);
      }
    for(i=1; i<5; i++)
      {
        if(min>a[i])
          {
            min=a[i];
          }
      }
    for(i=0; i<5; i++)
      {
        if(ss>a[i] && a[i]!=min)
          {
            ss=a[i];
          }
      }
    printf("\n second smallest no %d",ss);
    getch();
}
          

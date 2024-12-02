#include <stdio.h>
#include <conio.h>
void main()
{
  int a[5];
  int i=0,sl=-1,max=a[0];
printf("\n enter array");
scanf("%d",&a[i]);
for(i=1; i<5; i++)
    {
      if(a[i]>Max)
        {
          max=a[i];
        }
    }
for(i=0; i<5; i++)
    {
       if(a[i]>sl && a[i]<max)
        {
          sl=a[i];
        }
    }
  printf("\n second largest no=%d",sl);
  getch();
}
        

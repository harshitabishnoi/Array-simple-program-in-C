#include <stdio.h>
#include <conio.h>
void main()
{
    int a[50],i,pos,size;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&size);
    printf("ENTER THE ELEMENTS OF ARRAY\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" WHICH POSITION YOU WANT TO DELETE THE DATA\n");
    scanf("%d",&pos);
    if(pos<=0 || pos>size)
    {
        printf("INVALID POSITION !");
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    size--;
    printf("NEW ARRAY IS:- \n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
 
   }
    
}
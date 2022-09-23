// Online C compiler to run C program online
#include <stdio.h>
void swap (int a,int b);
void _swap (int *a,int *b);
int main() {
    int x=5, y=7;
_swap(&x,&y);
   printf("value x= %d & value y= %d\n",x,y);
    
    return 0;
}
void _swap (int *a,int *b)

{ int t=*a;
      *a=*b;
      *b=t;
      
     printf("value a= %d & value b= %d\n",*a,*b);    
}

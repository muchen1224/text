#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int number = 0;
   int a = 1;
   int n;
   puts("������һ��������");
   scanf("%d",&n);
   if(n%2 == 0)
     {
         while(a < n)
         {
             number +=a;
             a +=2;
         }
       

     }
     else
     {
         while(a <= n)
         {
             number +=a;
             a +=2;
         }
      
     }

     printf("���Ը������������ĺ�Ϊ��%d\n",number);
     system("pause");
     return 0;
}
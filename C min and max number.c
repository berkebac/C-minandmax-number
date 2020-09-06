/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int minF(int s1,int s2,int s3)
{
    if(s1<s2 && s1<s3)
    {
        printf("En küçük sayiniz: %d",s1);
    }
    if (s2<s3 && s2<s1)
    {
        printf("En küçük sayiniz: %d",s2);
    }
    if (s3<s2 && s3<s1)
    {
       printf("En küçük sayiniz: %d",s3);
    }
       
}

int maxF(int s1,int s2,int s3)
{
    printf("\n");
    if(s1>s2 && s1>s3)
    {
        printf("En büyük sayiniz: %d",s1);
    }
    if (s2>s3 && s2>s1)
    {
        printf("En büyük sayiniz: %d",s2);
    }
    if (s3>s2 && s3>s1)
    {
       printf("En büyük sayiniz: %d",s3);
    }
       
}

int main()
{
    int sayi1,sayi2,sayi3;
	printf("Bir sayı giriniz:");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	
	
	minF(sayi1,sayi2,sayi3);
	maxF(sayi1,sayi2,sayi3);
}

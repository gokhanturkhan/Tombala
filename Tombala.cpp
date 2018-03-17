#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
main()
{   bura:
	int a,b,c,kural1=0,kural2=0,kural3=0,asalsayac=0;
	srand(time(NULL));
		a=rand()%99+1;
		b:	b=rand()%99+1;
		if(b==a)
		{
			goto b;
		}
		c:	c=rand()%99+1;
		if(c==b || c==a)
		{
			goto c;
		}
		int pultoplam=a+b+c,pulfark,ort;
		if(a<b && a<c && b<c)
		{
			pulfark=c-a,ort=b;
		}
		else if(a<b && a<c && c<b)
		{
			pulfark=b-a,ort=c;
		}
		else if(b<a && b<c && a<c)
		{
			pulfark=c-b,ort=a;
		}
		else if(b<a && b<c && c<a)
		{
			pulfark=a-b,ort=c;
		}
		else if(c<a && c<b && b<a)
		{
			pulfark=a-c,ort=b;
		}
		else if(c<b && c<a && a<b)
		{
			pulfark=b-c,ort=a;
		}
		int toplamasal=0;	
	
		for(int i=2;i<pultoplam;i++)
   	    {
       		if(pultoplam%i==0)
        {
           asalsayac++;
        }    
        }
		if(asalsayac==0)
        {
        toplamasal=pultoplam;	
		}  
		
		if(pultoplam<150)
		{
			kural1++;
		}
		if(pultoplam==toplamasal)
		{
			kural2++;
		}
		if(pulfark>ort)
		{
			kural3++;
		}
		
		printf("Oyuna baslamak icin herhangi bir tusa basiniz..\n"); _getch();
		printf("Pul 1:%d\n",a);
		printf("Pul 2:%d\n",b);
		printf("Pul 3:%d\n",c);
		printf("Pullarin toplami:%d\n",pultoplam);
		printf("En buyuk pul ile en kucuk pulun farki %d - Ortancasi %d\n",pulfark,ort);
		if(kural1!=0)
		{
			printf("Tebrikler kazandiniz..(1.Kural)");
		}
		else if(kural2!=0)
		{
			printf("Tebrikler kazandiniz..(2.Kural)");
		}
		else if(kural3!=0)
		{
			printf("Tebrikler kazandiniz..(3.Kural)");
		}
		else
		{
			printf("Malesef kaybettiniz..");
		}
		printf("\nOyuna devam etmek icin [e/E]?\n\n");
		char secim; secim=getch();	
		if(secim=='e' || secim=='E')
		{
			goto bura;
		}
		}
		


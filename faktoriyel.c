#include <stdio.h>//Hüseyin Can Şi mşek 17253064
int main()
{
	int a,x,n,fakt=1,toplam=0,sonuc=0,i,k,l;
	printf("Lutfen menuden birini secin:\n");
	printf("cikis yapma:0\n");
	printf("0'dan N e kadar  olan cift sayilarin toplama:1\n ");
	printf("0'dan N e kadar X in katlarini toplama:2\n ");
	printf("N faktoriyel hesaplama:3\n");
	printf("Yapacaginiz islem numarasi");
	scanf("%d",&a);
	
	switch(a) 
	{
	case 0:
		printf("cikis");
			 break;
	case 1:
		{ 
			printf("Lutfen N sayisi girin:\n");
			scanf("%d",&n);
		
		for(i=0;i<=n;i++){
			if(i%2==0)
			{ 
			toplam=toplam+i;
			}
			
		}
		printf("0 dan %d ye kadar olan toplamin sonucu %d",n,toplam); break;
		}
	case 2:
		{
			printf("Lutfen N ve X sayisini giriniz\n");
			scanf("%d %d",&n,&x);
			for(k=0;k<=n;k++){
				if(k%x==0)
				{
				 sonuc=sonuc+k;
				}
			}
			printf("0'dan %d ye kadar olan %d nin katlarinin toplami %d\n",n,x,sonuc) ;  break;
			
		}
	case 3:
		{
			printf("Lutfen bir N degeri giriniz\n");
			scanf("%d",&n);
			for(l=n;l>=1;l--)
			{
			
				fakt=fakt*l;
			}
			printf("%d nin faktoriyeli %d\n ",n,fakt); break;
		}
	default:
		printf("Hatali deger girdiniz"); break;
		
		
	}
	return 0;
	
}

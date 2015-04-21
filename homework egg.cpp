//Insertion sort

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i , a , *b;
	time_t T=0;
	srand(time(0));
	a=10;
	b=(int *) malloc( a * sizeof(int));
	for(i=0;i<a;++i)
	{
		b[i]=rand() %100;
		printf("%d,",b[i]);
	}
	printf("\n");
	
	for(i=2;i<a;++i)
	{
		int u=b[i];
		int j;
		for(j=i-1;j>=0;--j)
		{
			if (u<b[j]){
				b[j+1]=b[j];
			}else
			     break;
		     b[j]=u;
		}
	}
	for(i=0;i<a;++i){
		printf("%d,",b[i]);
	}
	return 0;
}

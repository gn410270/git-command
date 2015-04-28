//Selection Sort
//quick median
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i , a , *b , u , j , n,g,h,k;
	time_t T=0;
	srand(time(0));
	a=11;
	b=(int *) malloc( a * sizeof(int));
	for(i=0;i<a;++i)
	{
		b[i]=rand() %100;
		printf("%d,",b[i]);
	}
	printf("\n");
	
	n=a;
	for(i=0;i<(n+1)/2;++i){    //苯磞筂┮Τ计т程计琌场计讽い材i计 
		u=i;                   //讽т n-i+1 计 
		for(j=i+1;j<n;++j){
			if(b[j]<b[u]){
				u=j;
			}
		}
		k=b[i];    // р材i计材i竚
		b[i]=b[u];
		b[u]=k;
	}
	for(i=0;i<a;++i){
		printf("%d,",b[i]);
	}
	printf("\n材い计计=%d",b[((n+1)/2)-1]);
	
	return 0;
}

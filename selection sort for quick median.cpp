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
	for(i=0;i<(n+1)/2;++i){    //���y�@�M�Ҧ��Ʀr�A���̤p�Ʀr�A�]�O�����Ʀr����i�p���Ʀr 
		u=i;                   //�۷��� n-i+1 �j���Ʀr 
		for(j=i+1;j<n;++j){
			if(b[j]<b[u]){
				u=j;
			}
		}
		k=b[i];    // ���i�p���Ʀr�A��b��i�Ӧ�m
		b[i]=b[u];
		b[u]=k;
	}
	for(i=0;i<a;++i){
		printf("%d,",b[i]);
	}
	printf("\n�Ĥ���Ƥj���Ʀr=%d",b[((n+1)/2)-1]);
	
	return 0;
}

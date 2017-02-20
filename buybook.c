#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N,M1,M2;
	scanf("%d",&N);
	int* allBook =(int *)malloc(sizeof(int)*(N+1));
	for(int i=0;i<N;i++){
		allBook[i] = -1;
	}
	scanf("%d",&M1);
	for(int i=0;i<M1;i++){
		int j;
		scanf("%d",&j);
		allBook[j-1]=0; 
	}
	
	scanf("%d",&M2);
	for(int i=0;i<M2;i++){
		int j;
		scanf("%d",&j);
		allBook[j-1] = -1*allBook[j-1];
	}
	int buyFlg = 0;
	for(int i = 0;i<N;i++){
		if(allBook[i] == 1){
			if(buyFlg == 1){
				printf(" ");
			}
			printf("%d",i+1);
			buyFlg = 1;
		}
	}
	if(buyFlg == 0){
		printf("None");
	}
	return 0;
	
}
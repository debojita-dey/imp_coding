#include<stdio.h>
int main(){
	int n,q,i,j,x;
	scanf("%d %d",&n,&q);
	int *arr[n];
	for(i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		arr[i]=(int *)malloc(k*sizeof(int));
	
		for(j=0;j<k;j++){
			scanf("%d",&arr[i][j]);
			//printf("%d",arr[i][j]);
		}
	}
	for(x=0;x<q;x++){
		scanf("%d %d",&i,&j);
		printf("ans=%d",arr[i][j]);
	}
	return 0;
}

/*
output:
2 2
3 1 5 4
5 1 2 8 9 3
0 1
ans=5
1 3
ans=9
*/

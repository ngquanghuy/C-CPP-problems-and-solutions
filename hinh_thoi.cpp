#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++)
			printf("~");
		for(int k=n; k>n-i; k--)
			printf("*");
		for(int x=n+1; x<n+i; x++)
			printf("*");
		printf("\n");
	}
	
//	for(int i=1; i<=n-1; i++){
//		for(int j=1; j<=i; j++)
//			printf("~");
//		for(int k=n-1; k>=i; k--)
//			printf("*");
//		for(int x=1; x<=n-i-1; x++)
//			printf("*");
//		printf("\n");
//	}
}

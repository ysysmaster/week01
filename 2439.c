#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            if (j<n-i-1) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
} 
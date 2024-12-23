#include <stdio.h>

int main(){
	int n=10;
	int	a[n] = {9,1,2,4,7,8,10,3,5,6};
	
	printf("Day la mang cua ban truoc khi duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	//Selection sort
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[minIndex]){
				minIndex = j;
			}
		}
		int tmp=a[i]; a[i] = a[minIndex]; a[minIndex] = tmp;
	}
	
	printf("Day la mang cua ban sau khi duoc sap xep bang sap xep chon: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

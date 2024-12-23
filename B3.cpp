#include <stdio.h>

int main(){
	int n=10;
	int	a[n] = {9,1,2,4,7,8,10,3,5,6};
	
	printf("Day la mang cua ban truoc khi duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	//insertion sort
	for(int i=1;i<n;i++){
		int Index=i-1,insertValue = a[i];
		while(Index >= 0 && insertValue < a[Index]){
			a[Index + 1] = a[Index];
			Index--;
		}
		a[Index + 1]=insertValue;
	}
	
	printf("Day la mang cua ban sau khi da duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

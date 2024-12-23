#include <stdio.h>

int binarySearch(int a[],int n,int x){
	int low=0, high = n - 1, xIndex=0;
	while(low <= high){
		int mid = (low + high)/2;
		if(a[mid] == x){
			xIndex = mid;
			return xIndex+1;
		}
		
		// khi x > gia tri tai vi tri a[mid]
		else if(a[mid] < x) low = mid + 1;
		
		// khi x < gia tri tai vi tri a[mid]
		else	high = mid - 1;
	}
	// kiem tra het mang roi nhung van ko tim thay => ko ton tai gia tri
	return xIndex=0;
}

int main(){
	int n=10;
	int	a[n] = {9,1,2,4,7,8,10,3,5,6};
	
	printf("Day la mang cua ban truoc khi duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	//selection sort
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[minIndex])	minIndex=j;
		}
		int tmp = a[i]; a[i] = a[minIndex]; a[minIndex] = tmp;
	}
	
	printf("Day la mang cua ban sau khi duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	int x;
	printf("\nMoi ban nhap vao gia tri can tim trong mang: ");	scanf("%d",&x);
	
	int xIndex = binarySearch(a,n,x);
	if(binarySearch(a,n,x))	printf("Gia tri %d ton tai trong mang nam o vi tri thu %d",x,xIndex);
	else	printf("Gia tri %d khong ton tai trong mang",x);
}

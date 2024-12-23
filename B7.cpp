#include <stdio.h>
#define maxSize 100

int main(){
		int matrix[maxSize][maxSize]={0};
		int n=0,m=0;
		printf("Moi nhap vao so hang: ");	scanf("%d",&n);
		printf("Moi nhap vao so cot: ");	scanf("%d", &m);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("Nhap gia tri Matrix[%d][%d]: ",i+1,j+1);
				scanf("%d",&matrix[i][j]);
			}
		}
		printf("Ma tran truoc khi sap xep: \n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
		
		int size = n*m;
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				if(matrix[i/m][i%m] < matrix[j/m][j%m]){
					int tmp=matrix[i/m][i%m];
					matrix[i/m][i%m] = matrix[j/m][j%m];
					matrix[j/m][j%m] = tmp;
				}
			}
		}
		
		printf("Ma tran sau khi duoc sap xep: \n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
}

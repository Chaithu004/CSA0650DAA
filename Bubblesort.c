#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
void Sort(int a[],int n)
{
int i,j;
for(i = 0;i < n-1;i++){
	for(j = 0;j < n-i-1;j++){
	if (a[j] > a[j+1]){
		swap(&a[j], &a[j+1]);
		}
	}
}
	printf("\nSorted Array:");
        for (i=0;i<n;i++){
        	printf("%d ",a[i]);
        }
}
int main(){
	int i,n,a[100],k;
	printf("B.chaithanya, Reg.No - 192210331");
	printf("\nEnter the Number:");
	scanf("%d",&n);
	printf("Elements in the Array were:");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
	}
	Sort(a,n);
	return 0;
}

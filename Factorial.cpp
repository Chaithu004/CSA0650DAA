#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,fact=1;
	printf("B.chaithanya, Reg.No - 192210331");
	printf("\nEnter the Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact = fact*i;
		}
	printf("Factorial of %d is %d",n,fact);
	return 0;
}

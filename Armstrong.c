#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,i=0,c,sum=0,rem;
	printf("B.chaithanya, Reg.No - 192210331");
	printf("\nEnter the Number:");
	scanf("%d",&n);
	c=n;
	while(n!=0){
		i++;
		n=n/10;
	}
	n=c;
	while(n!=0){
		rem= n%10;
		sum = sum + pow(rem,i);
		n=n/10;
	}
	if(c==sum){
		printf("The number is Armstrong");
	}
	else{
		printf("The Number is not Armstrong");
	}
	return 0;
}

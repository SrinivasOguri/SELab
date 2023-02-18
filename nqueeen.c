#include<stdio.h>
#include<stdlib.h>
int *x;
int Place(int, int);
int NQ(int, int);
int main(){
	
	int n;
	printf("\n enter the values of n");
	scanf("%d", &n);
	x= (int *)calloc(sizeof(int), (n+1));
	NQ(1,n);
	return 0;

}
int NQ(int k, int n)
{
	for(int i=1;i<=n;i++){
	      if(Place(k,i)==1){
	         x[k]=i;
	         if(k==n){
	         for(int i=1;i<=n;i++){
	         printf("%d\t", x[i]);}
	         printf("\n");}
	         else NQ(k+1,n);
	         }
	         }

	      }
int Place(int k, int i){
	
	for( int j =1; j<k;j++){
	if (x[j]==i || abs(k-j)==abs(x[j]-i) ) return 0;


	}
	return 1;
}

	
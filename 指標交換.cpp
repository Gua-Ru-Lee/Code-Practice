#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);
int main(){
	int A[2]={85,100};
	swap(&A[0],&A[1]);
	printf("%d %d",A[0],A[1]);
}
void swap(int *p1,int *p2){
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}

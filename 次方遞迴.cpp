#include<stdio.h>

int cub(int ,int );



int main()
{
	int a;//y表示多少次方
	scanf("%d",&a);
	printf("%d\n",cub(a,3));
	return 0;
}
int cub(int n,int k)
{
	if(k==0){
		return 1;
	}
    return n*cub(n,k-1);
}

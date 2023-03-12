#include<stdio.h>
#include<stdlib.h>
int fun(int *a);
int main(){
	
	int a[5] = {100,2,5,45,78};
	fun(a);
	printf("前三名為 : ");
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}	
	return 0;
}
int fun(int *a){
    int tmp;
    for(int j=0;j<5;j++){
    	for(int i=j+1;i<5;i++){
	    if(a[i]>a[j]){
	    	tmp = a[i];
	    	a[i] = a[j];
	    	a[j] = tmp;
		
	}	
	
	}
	
    }
}



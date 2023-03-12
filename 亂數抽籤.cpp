#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int i,j;
	int stu[32];
	for(int i=0;i<32;i++){
		stu[i]=rand()%58+1;
		for(j=0;j<i;j++){
			if(stu[i]==stu[j]){
			i--;
	        break;
		}
	}
}
    for(i=0;i<32;i++){
    	printf("%d ",stu[i]);
	}

}


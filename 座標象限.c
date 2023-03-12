#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a,b;
    printf("判斷象限n請輸入(x,y)\n");
    scanf("%d %d",&a,&b);
    if(a>0){
        if(b<0){
            printf("(%d,%d)在第四象限\n",a,b);
        }
        else if(b>0){
            printf("(%d,%d)在第一象限\n",a,b);
        }
        else if(b==0){
             printf("(%d,%d)在x軸上\n",a,b);
             }
    }
    else if(a==0){
        if(b!=0){
            printf("(%d,%d)在y軸上\n",a,b);
        }
        else{
            printf("(%d,%d)在原點上\n",a,b);
        }
    }
    else if(b==0){
        if(a!=0){
            printf("(%d,%d)在x軸上\n",a,b);
        }
        else{
            printf("(%d,%d)在原點上\n",a,b);
        }
    }

    else if(a<0){
        if(b<0){
            printf("(%d,%d)在第三象限\n",a,b);
        }
        else{
            printf("(%d,%d)在第二象限\n",a,b);
        }
    }
    system("pause");
    return 0;
}

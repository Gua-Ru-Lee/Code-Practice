#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a,b;
    printf("�P�_�H��n�п�J(x,y)\n");
    scanf("%d %d",&a,&b);
    if(a>0){
        if(b<0){
            printf("(%d,%d)�b�ĥ|�H��\n",a,b);
        }
        else if(b>0){
            printf("(%d,%d)�b�Ĥ@�H��\n",a,b);
        }
        else if(b==0){
             printf("(%d,%d)�bx�b�W\n",a,b);
             }
    }
    else if(a==0){
        if(b!=0){
            printf("(%d,%d)�by�b�W\n",a,b);
        }
        else{
            printf("(%d,%d)�b���I�W\n",a,b);
        }
    }
    else if(b==0){
        if(a!=0){
            printf("(%d,%d)�bx�b�W\n",a,b);
        }
        else{
            printf("(%d,%d)�b���I�W\n",a,b);
        }
    }

    else if(a<0){
        if(b<0){
            printf("(%d,%d)�b�ĤT�H��\n",a,b);
        }
        else{
            printf("(%d,%d)�b�ĤG�H��\n",a,b);
        }
    }
    system("pause");
    return 0;
}

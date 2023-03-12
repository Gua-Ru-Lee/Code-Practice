#include<stdio.h>
#include<stdlib.h>
int fun(int *a);
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        printf("¿é¤J¼Æ¦r:");
        scanf("%d",&a[i]);
    }
    fun(a);
    printf("\n");
    printf("%d",a[0]);
    printf("\n");
    printf("%p",&a[0]);

}
int fun(int *a)
{
    int tmp;
    for(int j=0; j<5; j++)
    {
        for(int i=j+1; i<5; i++)
        {
            if(a[i]>a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }}

#include<stdio.h>
#include<stdlib.h>
#define Max 5
struct data
{
    char name[10];
    int ch;
    int en;
    int so;
    int na;
    int ma;
};
void bubble_sort(int arr[]);
int main()
{
    int a,b,c,d,e,av,i;
    struct data s1= {"Mary",100,95,100,85,14};
    struct data s2= {"Anderson",14,75,85,10,47};
    struct data s3= {"Bob",85,74,89,14,87};
    struct data s4= {"Joshua",20,28,52,98,100};
    struct data s5= {"Siri",100,90,75,70,90};

    a=((s1.ch+s1.en+s1.ma+s1.na+s1.so)/5);
    b=((s2.ch+s2.en+s2.ma+s2.na+s2.so)/5);
    c=((s3.ch+s3.en+s3.ma+s3.na+s3.so)/5);
    d=((s4.ch+s4.en+s4.ma+s4.na+s4.so)/5);
    e=((s5.ch+s5.en+s5.ma+s5.na+s5.so)/5);
    int arr[Max]= {a,b,c,d,e};
     for(i=0; i<Max; i++)
    {
        printf("%d\n",arr[i] );
    }
    printf("ензб:%d\n",(a+b+c+d+e)/5);
    bubble_sort(arr);
    for(i=0; i<Max; i++)
    {
        printf("%d ",arr[i] );
    }

    if(arr[0]==a)
    {
        printf("Mary1");
    }
    else if(arr[0]==b)
    {
        printf("Anderson1");
    }
    else if(arr[0]==c)
    {
        printf("Bob1");
    }
    else if(arr[0]==d)
    {
        printf("Joshua1");
    }
    else if(arr[0]==e)
    {
        printf("Siri1");
    };

    if(arr[1]==a)
    {
        printf("Mary2");
    }
    else if(arr[1]==b)
    {
        printf("Anderson2");
    }
    else if(arr[1]==c)
    {
        printf("Bob2");
    }
    else if(arr[1]==d)
    {
        printf("Joshua2");
    }
    else if(arr[1]==e)
    {
        printf("Siri2");
    };


    if(arr[2]==a)
    {
        printf("Mary3");
    }
    else if(arr[2]==b)
    {
        printf("Anderson3");
    }
    else if(arr[2]==c)
    {
        printf("Bob3");
    }
    else if(arr[2]==d)
    {
        printf("Joshua3");
    }
    else if(arr[2]==e)
    {
        printf("Siri3");
    };



}

void bubble_sort(int arr[])
{
    int i,j;
    for(i = 0; i < 5; ++i)
    {
        for (j = 0; j < i; ++j)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

            }
        }
    }
}





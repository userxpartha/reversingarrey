# include<stdio.h>
void rotate_left_once(int aarrey[],int length);
void left_rotate(int A[],int d,int );
int main()
{

    int A[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
     printf("%d ",A[i]);
     printf("\n");
    }
    int d=2;

    left_rotate(A,d,5);

    for(int i=0;i<5;i++)
        printf("%d ",A[i]);
    printf("\n");

    return 0;
}
void left_rotate(int arrey[],int d,int length)
{
    for (int i=0;i<d;i++)
    rotate_left_once(arrey,length);
}
void rotate_left_once(int arrey[],int length)
{
    int temp=arrey[0];
    for(int i=0;i<(length-1);i++)
    arrey[i]=arrey[i+1];
    arrey[length-1]=temp;
}
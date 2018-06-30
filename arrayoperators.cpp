#include<stdio.h>

int A[5],B[5],C[10];
int i,j,k;
void creation(int D[])
{   printf("Enter elements of array\n");
    for(i=0;i<5;i++)
        scanf("%d",&D[i]);

}

void deletion()
{
     printf("\nEnter position from where you want to delete an element\n");
         scanf("%d",&j);


    for(i=j;i<4;i++)
      A[i]=A[i+1];

    A[4]=0;
    printf("Element deleted \n");
}
void ins_sort(int D[])
{ int temp=0;
  for(i=1;i<5;i++)
  {
      for(j=i-1;j>=0;j--)
      {
          temp=D[j];
          if(D[j+1]<D[j])
          {
              D[j]=D[j+1];
              D[j+1]=temp;

          }
          else
            break;
      }
  }
  printf("\nSorted array : ");
  for(i=0;i<5;i++)
    printf("%d",D[i]);
    printf("\n");
}
void merge_sort()
{
    creation(B);
    ins_sort(B);
    i=0;j=0;k=0;
    while(i<5&&j<5)
    {
        if(A[i]<B[j])
        C[k++]=A[i++];
        else
        C[k++]=B[j++];
    }
    if(j==5)
        while(i<5)
        C[k++]=A[i++];
    else
        while(j<5)
        C[k++]=B[j++];
    printf("\nSorted array after merge sort : ");
    for(i=0;i<10;i++)
        printf("%d",C[i]);
    printf("\n");
}

void search()
{   int s, l,u,m,flag;
    printf("Enter element to be searched\n");
    scanf("%d",&s);
    ins_sort(A);

    l=0;u=4;
    flag=0;
    m=(l+u)/2;
    while(u>=l)
    {
        if(A[m]==s)
           {
            flag=1;
            break;}
        else if(s>A[m])
           {
               l=m+1;
               m=(l+u)/2;}
        else
        {
            u=m-1;
            m=(l+u)/2;
        }

    }
    if(flag)
        printf("\nElement is found at : %d\n",(m+1));
    else
        printf("\nElement not present in array\n");
}

int main()
{   int c;
    int l=1;
    while(l)
    {

    printf("\nEnter 1 to create an array\nEnter 2 to delete an element from array\nEnter 3 to perform binary search\nEnter 4 for insertion sort\nEnter 5 for merge sort\nEnter 6 to exit\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        creation(A);
        break;
    case 2:
        deletion();
        break;
    case 3:
        search();
        break;
    case 4:
        ins_sort(A);
        break;
    case 5:
        merge_sort();
        break;
    case 6:
        l=0;
        break;
    default:
        printf("Wrong choice please enter again\n");}

    }
    return 0;
}


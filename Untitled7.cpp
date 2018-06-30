#include <stdio.h>
#include <stdlib.h>
 static int n,l,m,r;
 static int a[100];
void create()
{
  int i;
 printf("Enter number of elements ");
     scanf("%d", &n);
     for( i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &a[i]);
     }
}
void delet()
{
    int position,c;
     printf("Enter the location where you wish to delet element\n");
   scanf("%d", &position);

   if ( position >= n+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( c = position - 1 ; c < n - 1 ; c++ )
         a[c] = a[c+1];

      printf("Resultant array is\n");

      for( c = 0 ; c < n - 1 ; c++ )
         printf("%d\n", a[c]);
   }
}
void insert()
{
     int position,value,c;
      printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (c = n - 1; c >= position - 1; c--)
      a[c+1] = a[c];

   a[position-1] = value;

   printf("Resultant array is\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", a[c]);
}
void search()
{
    int  first, last, middle, n, search;
   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (a[middle] < search)
         first = middle + 1;
      else if (a[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);

}
void insertionsort()
{
    int c,d,t=0;
    for (c = 1 ; c <= n - 1; c++) {
    d = c;

    while ( d > 0 && a[d] < a[d-1]) {
      t          = a[d];
      a[d]   = a[d-1];
      a[d-1] = t;

      d--;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", a[c]);
  }
}
int main()
{
    int x;
    printf("MENU");
     printf("1-creation 2-insertion 3-deletion 4-searching 5-sorting \n");
      printf("Enter your choice \n");
      scanf("%d",&x);
      while(x>0 && x<6)
      {
      switch (x)
      {
      case 1:
        create();
        break;
      case 2:
        insert();
        break;
      case 3:
        delet();
        break;
      case 4:
        search();
        break;
      case 5:
        insertionsort();
        break;
      default:
        printf("wrong Input");
      }
printf("Enter your choice if you want to continue \n");
scanf("%d",&x);
      }
}


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 100
struct stack {
   int s[size];
   int top;
}st;
int stfull() {
   if (st.top >= size - 1)
      return 1;
   else
      return 0;
}
void push(int item)
{
    if (stfull())
        printf("\nStack is Full!");
    else
    {
         st.top++;
         st.s[st.top] = item;
    }
}
int stempty() {
   if (st.top == -1)
      return 1;
   else
      return 0;
}
int pop()
{
   int item;
   if (stempty())
        printf("\nEmpty stack!Underflow !!");
    else
         {
            item = st.s[st.top];
            st.top--;
            return (item);
         }
}
void display() {
   int i;
   if (stempty())
      printf("\nStack Is Empty!");
   else {
      for (i = st.top; i >= 0; i--)
         printf("\n%d", st.s[i]);
   }
}
int main()
{
   system("color F0");
   int item, choice;
   char ans;
   st.top = -1;
   printf("\n Implementation Of Stack");
   do {
      printf("\nMain Menu");
      printf("\n1.Push \n2.Pop \n3.Display \n4.exit");
      printf("\nEnter Your Choice");
      scanf("%d", &choice);
      switch (choice) {
      case 1:
              {
                printf("\nEnter The item to be pushed");
                scanf("%d", &item);
                push(item);
                break;
              }
      case 2:
              {
                 item = pop();
                 printf("\nThe popped element is %d", item);
                 break;
              }
      case 3:
               {
                 display();
                 break;
               }
      case 4:
                 exit(0);
      default :
                 printf("\nWrong Input");
      }
      printf("\nDo You want To Continue?(Y/y)");
      ans = getche();
   } while (ans == 'Y' || ans == 'y');
return 0;
}


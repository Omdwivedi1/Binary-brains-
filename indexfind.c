
 
#include<stdio.h>

int find_index(int arr[], int n, int k)

  {  int l= 0;
    int h=n - 1;


    while (l<=h) {

 int mid = (l+h)/2;

 if (arr[mid] == k)

  return mid;

 else if (arr[mid] < k)
      l= mid + 1;

 else
        h= mid - 1;

    }

   

    return h+ 1;
}
 


void main()
{int n,x;
    printf("input size");
    scanf("%d",&n);
int a[10];
  printf("input  sorted array");
  for(int i=0;i<n;i++)
 { scanf("%d",&a[i]);}
printf("input element ");
scanf("%d",&x);
   

    
printf("index at which element to be inserted is:\n");
    printf("%d",find_index(a, n, x));
}

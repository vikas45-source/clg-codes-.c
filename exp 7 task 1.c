Program with Output:
#include<stdio.h>
int main()
{
    int n,i,arr[10];
    printf("enter the numbers of element(1 to 10):");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i < n; i++) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %d", arr[0]);
  return 0;
}

//Generation of even number series 2, 4, 6, …..n

#include<stdio.h>
int main()
{
  int i, N;
  printf("Enter N:");
  scanf("%d", &N);

  for(i=2; i<=N; i=i+2)
  {
    printf("%d ",i);
  }
  return 0;
}
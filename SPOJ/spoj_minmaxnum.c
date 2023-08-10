#include<stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  int count; 
  int N,K;
  scanf("%d", &count);

  while(count--){
    scanf("%d %d", &N, &K);

    if(K == 1){
      for (int i = 0; i < N; i++)
      {
        /* code */
        printf("1");
      }
      printf(" ");
      for (int i = 0; i < N; i++)
      {
        /* code */
        printf("9");
      }
      printf("\n");
    }
    else{
        printf("1");
        for (int i = 0; i < (N - K) + 1; i++)
        {
          /* code */
          printf("0");
        }
        for (int i = 2; i <= (K - 2) + 1; i++)
        {
          printf("%d", i);
          /* code */
        }
        printf(" ");
        printf("9");
        for (size_t i = 0; i < N-K; i++)
        {
          printf("9");
          /* code */
        }
        for (int i = 1; i < K; i++)
        {
          printf("%d", 9-i);
        }
        printf("\n");
      }
  }
  return 0;
}

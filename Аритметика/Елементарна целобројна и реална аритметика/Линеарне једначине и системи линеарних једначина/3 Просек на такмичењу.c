#include<stdio.h>
int main(){
  int N, K;
  double p1, p2;
  scanf("%i %i %lf %lf", &N, &K, &p1, &p2);
  printf("%.2lf\n", ((N-K)*p1 + K*p2)/N); /* (N-K)*p1 je zzbir poena na prvoj strani lista, K*p2 je zbir poena na drugoj strani lista */
}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  srand(time(NULL));
  char ans=rand()%4+'A';
  printf("answer is %c\n",ans);
  return 0;
}

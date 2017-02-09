#include <stdlib.h>
#include <stdio.h>

void isPrime(char* in){
  if(in == NULL){
    printf("error\n");
    return;
  }
  int i, isPrime = 1;
  int input = atoi(in);
  if(input == 0){printf("no\n");return;}
  for(i = 2;i<=(input/2);i++){
    if(input%i == 0){isPrime = 0;}
  }
  if(isPrime == 0){
    printf("no\n");
  }
  else{
    printf("yes\n");
  }
}

int main(int argc, char **argv){
  isPrime(argv[1]);
  return 0;
}

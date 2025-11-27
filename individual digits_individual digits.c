#include<stdio.h>

void printdigits(int num);

int main(){
  int number;
  printf("enter the number");
  scanf("%d",&number);
  printf("individual digits are:\n");
  printdigits(number);
  return 0;
}
void printdigits(int num){
 int rev=0,digit;
 
while(num>0){
 digit = num%10;
 rev=rev*10+digit;
 num/=10;
}
while(rev>0){
 digit=rev/10;
 printf("%d\n",digit);
 rev/=10;
 }
}


    
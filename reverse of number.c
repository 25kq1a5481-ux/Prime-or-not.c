#include<stdio.h>

int reverseNumber(int num);

int main(){
  int number,rev;
  printf("enter the number");
  scanf("%d",&number);
  rev=reverseNumber(number);
  printf("reverse of %d is:%d\n",number,rev);
  return 0;
}
  int reverseNumber(int num){
 int rev=0,digit;
 
while(num>0){
 digit = num%10;
 rev=rev*10+digit;
 num/=10;
}
return rev;
}


    
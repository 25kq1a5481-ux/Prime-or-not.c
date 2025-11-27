#include<stdio.h>
int add(int n);
int main(){
int n;
printf("enter a number");
scanf("%d",&n);
if(add(n))
printf("even",n);
else
printf("odd",n);
}
int add(int n){
if (n%2==0)
return 1;
else
return 0;
}
    
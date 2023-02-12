#include<stdio.h>
void main(){
  int i,n,sum,rem;
  for(i=1;i<1000;i++){
    sum=0;
    n=i;
    while(n!=0){
      rem=n%10;
      sum=sum+(rem*rem*rem);
      n=n/10;
    }
    if(sum==i){
      printf("%d ", i);
    }
  
  }

}
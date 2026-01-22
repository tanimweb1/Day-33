#include<stdio.h>
int main(){

// For loop break and continue revise

for(int i = 1;i<20;i++){

if(i%3==0)
continue;
printf("%d\n",i);

if(i==10)
break;
  
}









  // while loop multiplication table

int n;
printf("Enter the number : ");
scanf("%d",&n);

int i = 1;
while(i<=10){

    printf("%d * %d = %d\n",n,i,n*i);
i++;
}


  

    
    return 0;
}




#include <iostream.h> 

#include <stdlib.h> 

#include <stdio.h> 

  

int main() 

{ 

 int i,j,f; 

 for(i=1;i<=9;i++) 

 { 

  for(j=1;j<=9;j++) 

  { 

   f=i*j; 

   printf("%d*%d=%-3d",i,j,f); 

  } 

  printf("\n"); 

 } 

      system("PAUSE"); 

      return 0; 

} 

#define array_size 10
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main() {
int a[array_size];
int i;
int k;
int n;
int check;
srand(time(NULL));
k=0;
for (i=0;i<array_size;i++){
   a[i]=rand()%200 -100;
   //printf("%d\n",a[i]);
   check=a[i]%2;
     if(check==0) k++;
     if(check!=0) n++;}
printf("The quantity of even numbers is %d\n",k);
printf("The quantity of odd numbers is %d\n",n);
}

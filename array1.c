#include <stdio.h>
int main(){
int n,i;



printf("Enter the array size : ");

scanf("%d",&n);

int arr[n];

printf("Enter the %d elements : ",n);
for(i=0;i<n;i++)
//{
scanf("%d",&arr[i]);
//}

printf("The given array is : ");
for(i=0;i<n;i++)
printf("\t %d",arr[i]);




return 0;

}
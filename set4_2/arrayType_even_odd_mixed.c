//Write Program to find the array type.Even,Odd or Mixed.
#include <stdio.h>

void array_type(int arr1[],int len){
   //even,odd or mixed
   int even = 0;
   int odd = 0;
   for(int i=0;i<len;i++){
       if(arr1[i]%2==0){
           even++;
       }else{
           odd++;
       }
   }
   
   if(even==len){
       printf("Array type is even.");
   }else if(odd==len){
       printf("Array type is odd.");
   }else{
       printf("Array is mixed.");
   }
}

int main()
{
    int arr_a[10];
    int n;
    printf("Type array's number of elements(should not exceed 10) : ");
    scanf("%d",&n);
    if(n<10 && n>0){
        for(int i=0;i<n;i++){
           scanf("%d",&arr_a[i]);
       }
    }else{
        printf("Static array size limit exceeded.");
        return 0;
    }
    array_type(arr_a,n);
    return 0;
}

//Write Program to check if two arrays are the same or not.
#include <stdio.h>

void check_equal_arrays(int arr1[],int arr2[],int len_1,int len_2){
   
    if(len_1==len_2){
        for(int i=0;i<len_1;i++){
            if(arr1[i]!=arr2[i]){
                printf("The two arrays are not equal.");
                return;
            }
        }
        printf("The two arrays are equal.");
    }
    else
    {
       printf("The two arrays are not equal."); 
    }
   
}

int main()
{
    int arr_a[7] = {1,2,3,4,5,6,7};
    int arr_b[7] = {1,2,3,4,5,6,7};
    int arr_c[8] = {1,2,3,4,5,6,7,8};
    int arr_d[7] = {1,2,3,4,5,6,8};
    int len_a = sizeof(arr_a)/sizeof(arr_a[0]);
    int len_b = sizeof(arr_b)/sizeof(arr_b[0]);
    int len_c = sizeof(arr_c)/sizeof(arr_c[0]);
    int len_d = sizeof(arr_d)/sizeof(arr_d[0]);
    check_equal_arrays(arr_a,arr_d,len_a,len_d);
    return 0;
}

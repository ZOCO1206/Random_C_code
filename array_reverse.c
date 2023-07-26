#include <stdio.h>    
     
int main()    
{    
    //Initialize array
    int i,n;     
    int arr[n];     
   scanf("%d",&n);
   for (i = n; i < 100; i++) {
    scanf("%d", &arr[i]);
}
    //Calculate length of array arr    
    int length = sizeof(arr[i])/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    
// // // 1,2,3. sum,sum of even,odd and average
// #include<stdio.h>
// void input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void sum_output(int arr[],int n){
//     int sum = 0;
//     for(int i = 0; i < n;i++){
//         sum = sum + arr[i];
//     }
//     float average = sum / (n*10.0);
//     printf("The sum for all values is : %d \n and There average is %.2f",sum,average*10.0);
// }


// void sum_of_even(int arr[],int n){
//     int sum = 0;
//     for(int i = 0; i < n;i++){
//         sum = sum + arr[2*i+1];
//     }
//     printf("\nSum of all even number is : %d",sum);
// }
// void sum_of_odd(int arr[],int n){
//     int sum = 0;
//     for(int i = 0; i < n;i++){
//         sum = sum + arr[2*i];
//     }
//     printf("\nSum of all odd number is : %d\n",sum);
// }

// int main(){
//     int arr[100];
//     int n;
//     printf("Enter the value that how many value u want to insert in array : ");
//     scanf("%d",&n);
//     input(arr,n);
//     sum_output(arr,n);
//     sum_of_even(arr,n);
//     sum_of_odd(arr,n);
//     getchar();
//     return 0;
// }



// //greatest element in array
// //smallest element in array;
// #include<stdio.h>
// void input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// int find_greatest(int arr[],int n){
//     int greatest = arr[0];
//      int maxIndex = 0;
//     for(int i = 0; i < n;i++){
//         if(greatest<arr[i]){
//             greatest = arr[i];
//              maxIndex = i;
//         }
//     }
//     return greatest;
// }
// int find_smallest(int arr[],int n){
//     int smallest = arr[0];
//      int minIndex = 0;
//     for(int i = 0; i < n;i++){
//         if(arr[i]<smallest){
//             smallest = arr[i];
//              minIndex = i;
//         }
//     }
//     return smallest;
// }
// int main(){
//     int arr[100];
//     int n;
//     printf("Enter the number you want to enter in array : ");
//     scanf("%d",&n);
//     input(arr,n);
//     int g = find_smallest(arr,n);
//     printf("The greatest number in the array is : %d",g);
//     getchar();
//     return 0;
// }




//Write an function to rotate an array element by one position towards right
#include<stdio.h>
void input(int arr[],int n){
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
}
void rotate_array_elements(int arr[],int n){
    int d = arr[n-1];
   
    for(int i = n; i >= 1;i--){
       arr[i]=arr[i-1];
    }
    arr[0] = d;
    
}
void outputarray(int arr[],int n){
  for(int i = 0; i < n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[100];
    int n;
    printf("Enter the number you want to enter in array : ");
    scanf("%d",&n);
    input(arr,n);
    int k;
    printf("Enter the value that how many rotations you want : ");
    scanf("%d",&k);
    for(int i = 0; i<k;i++){
    rotate_array_elements(arr,n);
    }
    outputarray(arr,n);
    getchar();
    return 0;
}
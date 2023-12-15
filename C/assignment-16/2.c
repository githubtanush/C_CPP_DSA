// //Test case 44 71 23 98 62 54 18 12 39 50 81 29 7 58
// #include<stdio.h>
// void input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void insertion_sort(int arr[],int n){
//     int i,j,key;
//     for(int i = 1; i < n;i++){
//         key = arr[i];
//         int j = i - 1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }
// void output(int arr[],int n){
//     for(int i =0; i< n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[1000];
//     int n;
//     printf("Enter the value of array that how many big array u want to print : ");
//     scanf("%d",&n);
//     input(arr,n);
//     insertion_sort(arr,n);
//     output(arr,n);
//     getchar();
//     return 0;
// }



// //Write a function to calculate frequency of distinct elements:
// //Test case 2 3 1 2 2 1 2 4 3 2 2 1 4 3 3 2 1
// #include<stdio.h>
// void input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void insertion_sort(int arr[],int n){
//     int i,j,key;
//     for(int i = 1; i < n;i++){
//         key = arr[i];
//         int j = i - 1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }
// void frequency(int arr[],int n){
//     int i=0;
//     while(i<n){
//         int count = 1;
//         int j = i + 1;
//         while(j<n && arr[i]==arr[j]){
//             count++;
//             j++;
//         }
//         printf("\n%d-%d",arr[i],count);
//         i=j;
//     }
// }
// void output(int arr[],int n){
//     for(int i =0; i< n;i++){
//         printf("\n%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[1000];
//     int n;
//     printf("Enter the value for n that how many u want to print the big array : ");
//     scanf("%d",&n);
//     input(arr,n);
//     insertion_sort(arr,n);
//     frequency(arr,n);
//     output(arr,n);
//     getchar();
//     return 0;
// }



// //Write a function to calculate frequency of distinct elements:
// //Test case 2 3 1 2 2 1 2 4 3 2 2 1 4 3 3 2 1
// #include<stdio.h>
// void input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         scanf("%d",&arr[i]);
//     }
// }

// void frequency(int arr[],int n){
//     for(int i = 0; i < n; i++){
//         int count = 1;
//         for(int j = i + 1; j < n;j++){
//             if(arr[i]==-1)
//                 continue;
//             if(arr[i]==arr[j]){
//                 count++;
//                 arr[j]=-1;
//             }
//         }
//         if(arr[i]!=-1){
//         printf("\n%d - %d",arr[i],count);
//         }
//     }
// }
// void output(int arr[],int n){
//     for(int i =0; i< n;i++){
//         printf("\n%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[1000];
//     int n;
//     printf("Enter the value for n that how many u want to print the big array : ");
//     scanf("%d",&n);
//     input(arr,n);
//     frequency(arr,n);
//     output(arr,n);
//     getchar();
//     return 0;
// }

//matrix
#include<stdio.h>
void input(int a[1000][1000],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void output(int a[1000][1000],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ",a[i][j]);
        }
    }
}
int main(){
    int a[1000][1000];
    int n;
    printf("Enter the dimensions of row and column that how many big matrix u want to print : ");
    scanf("%d",&n);
    int i,j;
    for(int i = 0; i < 2;i++){
    input(a,n);
    }
    for(int i = 0; i < 2;i++){
    output(a,n);
    }

    getchar();
    return 0;
}
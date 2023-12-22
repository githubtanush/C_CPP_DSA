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




// //Matrix add
// #include<stdio.h>
// void take_input(int arr[][3]){
//     for(int i = 0; i < 3 ;i++){
//         for(int j = 0; j < 3;j++){
//             printf("Enter value for a[%d][%d]",i,j);
//             scanf("%d",&arr[i][j]);
//             printf("\n");
//         }
//     }
// }
// void print_output(int arr[][3]){
//     for(int i = 0; i < 3 ;i++){
//         for(int j = 0; j < 3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// void print_add_array(int arr[][3],int brr[][3]){
//     for(int i = 0; i < 3;i++){
//         for(int j = 0; j < 3;j++){
//             printf("%d ",arr[i][j]+brr[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int arr[3][3];
//     int brr[3][3];
//     printf("Enter the value for first 3 * 3 matrix : ");
//     take_input(arr);
//     print_output(arr);
//     printf("Enter the value for second 3 * 3 matrix : ");
//     take_input(brr);
//     print_output(brr);
//     printf("The resulting matrix after adding the value of both the matrices is : \n");
//     print_add_array(arr,brr);
//     return 0;
// }


//Matrix multiplication
#include<stdio.h>
void take_input(int arr[][3]){
    for(int i = 0; i < 3 ;i++){
        for(int j = 0; j < 3;j++){
            printf("Enter value for a[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void print_output(int arr[][3]){
    for(int i = 0; i < 3 ;i++){
        for(int j = 0; j < 3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void print_mul_array(int arr[][3],int brr[][3],int prod[][3]){
    int sum, m;
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            for(m=0,sum=0; m < 3; m++){
                sum = sum +(arr[i][m]*brr[m][j]);
            }
            prod[i][j]=sum;
            }
        printf("\n");
    }
}
int main(){
    int arr[3][3];
    int brr[3][3];
    int prod[3][3];
    printf("Enter the value for first 3 * 3 matrix : ");
    take_input(arr);
    print_output(arr);
    printf("Enter the value for second 3 * 3 matrix : ");
    take_input(brr);
    print_output(brr);
    printf("The resulting matrix after adding the value of both the matrices is : \n");
    print_mul_array(arr,brr,prod);
    print_output(prod);
    return 0;
}

//1 2 3 4 5 6 7 8 9
// 1 4 7 2 5 8 3 6 9
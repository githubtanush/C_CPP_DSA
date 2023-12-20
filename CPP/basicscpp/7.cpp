//Function to calculate H_C_F of two numbers
// #include<iostream>
// using namespace std;
// void H_C_F(int x, int y){
//     while(x!=y){
//         if(x>y){
//             x = x - y;
//         }
//         else{
//             y = y - x;
//         }
//     }
//         cout<<x;
// }
//Method 2
//  int H_C_F(int a,int b){
//  for(int i = a<b?a:b; i>=1 ;i++){
//   if(a%i==0 && b%i==0){
//      return i;
//     }
//}
//return 1;
//}


// int main(){
//     int a, b;
//     cout<<"Enter the two numbers for which u find H_C_F : ";
//     cin>>a>>b;
//     cout<<"H_C_F of this two numbers is : ";
//     H_C_F(a,b);
//     return 0;
// }




// //function to find volume of cuboid cone and sphere
// #include<iostream>
// using namespace std;
// int volume(int a, int b, int c){
//     return a * b * c;
// }
// float volume (int r){
//  return (4*3.14*r*r*r)/3;
// }
// float volume(int r ,int h){
//     return (1*3.14*r*r*h)/3;
// }
// int main(){
//     int a,b,c;
//     cout<<"Enter length , breadth and height for find volume of cuboid : ";
//     cin>>a>>b>>c;
//     cout<<"\nThe volume of cuboid is : "<<volume(a,b,c);
//     int r;
//     cout<<"\nEnter the value for radius for which u find volume of sphere : ";
//     cin>>r;
//     cout<<"\nThe volume of sphere is : "<<volume(r);
//     int p,h;
//     cout<<"\nEnter the value for radius and height for which u find volume of cone : ";
//     cin>>p>>h;
//     cout<<"\nThe volume of cone is : "<<volume(p,h);
//     return 0;
// }


// // Define a function to swap two arrays 
// #include<iostream>
// using namespace std;
// void take_input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         cin>>arr[i];
//     }
// }
// void take_output(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void swap(int arr[],int n){
//     int temp[1000];
//         for(int i = 0; i < n/2;i++){
//             //method 1:
//             // temp[i]=arr[i];
//             // arr[i]=arr[n-i-1];
//             // arr[n-i-1]=temp[i];

//             //method 2 : 
//             swap(arr[i],arr[n-i-1]);
//         }
// }
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of the array that how many big array u want to swap : ";
//     cin>>n;
//     take_input(arr,n);
//     cout<<"\nBefore swapping : ";
//     take_output(arr,n);
//     swap(arr,n);
//     cout<<"\nAfter swapping : ";
//     take_output(arr,n);
//     return 0;
// }




// //Define a function to merge two arrays of same size
// #include<iostream>
// using namespace std;
// void take_input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         cin>>arr[i];
//     }
// }
// void take_output(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void merge(int arr[],int brr[],int crr[],int n){
//     int i;
//     for(i = 0; i < n;i++){
//         crr[i]=arr[i];
//     }
//     for(int j = 0; j < n;j++,i++){
//         crr[i]=brr[j];
//     }

// }
// int main(){
//     int arr[1000],brr[1000];
//     int n;
//     cout<<"Enter the size for all arrays : ";
//     cin>>n;
//     cout<<"\nNow give input for the 1st array : ";
//     take_input(arr,n);
//     sort(arr,arr+n);
//     cout<<"\nOutput for the 1st array arr is : ";
//     take_output(arr,n);
//     cout<<"\nNow give input for the 2nd array : ";
//     take_input(brr,n);
//     sort(brr,brr+n);
//     cout<<"\nOutput for the 2nd array brr is : ";
//     take_output(brr,n);
//     cout<<"\nNow merge this values two the new array crr : ";
//     int crr[1000];
//     int p = n + n;
//     merge(arr,brr,crr,n);
//     cout<<"\nNow after merging array would be look like this : ";
//     take_output(crr,p);
//     return 0;
// }


//method 2
// int* merge(int a[],int b[],int n){
//     int *arr = (int*) malloc(2*n*sizeof(int));
//     int i,j,k;
//     for(i = 0,j=0,k=0; i<n && j<n;k++){
//         if(a[i]<b[i]){
//             arr[k]=a[i];
//             i++;
//         }
//         else{
//             arr[k]=b[j];
//             j++;
//         }
//     }
//     while(i<n){
//         arr[k]=A[i];
//         i++;
//         k++;
//     }
//     while(j<n){
//         arr[k]=b[j];
//         j++;
//         k++;
//     }
//     return arr;
// }



// //define a function that given the substring
// #include<iostream>
// using namespace std;
// void take_input(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         cin>>arr[i];
//     }
// }
// void take_output(int arr[],int n){
//     int a;
//     cout<<"Enter that from what index you start the string : ";
//     cin>>a;
//     int b;
//     cout<<"Enter at what index you want to print the string : ";
//     if(cin>>b){
//     for(int i = a; i < b;i++){
//         cout<<arr[i]<<" ";
//     }
//     }
//     else{
//          for(int i = a; i < n;i++){
//         cout<<arr[i]<<" ";
//     }
//     }
// }
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of the array : "<<endl;
//     cin>>n;
//     take_input(arr,n);
//     cout<<"\nArray will be see like this : ";
//     take_output(arr,n);   
//     return 0;
// }


//In the string method 2
// #include<iostream>
// #include<string.h>
// using namespace std;
// void printsubstring(char str[],int startindex,int endindex=-1){
//     if(endindex==-1){
//         endindex=strlen(str);
//     }
//     for(int i = startindex; i <endindex;i++){
//         cout<<str[i];
//     }
// }
// int main(){
//     char str[]="MySirG education services";
//         printsubstring(str,3);
//         cout<<endl;
//     return 0;
// }
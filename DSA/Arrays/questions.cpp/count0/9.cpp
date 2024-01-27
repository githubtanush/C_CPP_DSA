//2D Array
#include<iostream>
#include<limits>
using namespace std;
//Row wise Access
void printArray(int arr[1000][1000],int row,int col){
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// //Column Wise Access
// void printArray(int arr[1000][1000],int row,int col){
//     for(int i = 0; i < col;i++){
//         for(int j = 0; j < row;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

void inputArray(int arr[1000][1000],int row,int col){
    cout<<endl;
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
}

bool findtarget(int arr[1000][1000],int row,int col,int target){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int findMax(int arr[1000][1000],int row,int col){
    int maxAns = INT_MIN;
    for(int i = 0 ; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]>maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[1000][1000],int row,int col){
    int minAns = INT_MAX;
    for(int i = 0 ; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]<minAns){
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

void rowWiseSum(int arr[1000][1000],int row,int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void colWiseSum(int arr[1000][1000],int row ,int col){
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row;j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}
//diagonalSum
void diagonalSum(int arr[1000][1000],int row, int col){
    int sum = 0;
    for(int i = 0; i < row;i++){
        sum = sum + arr[i][i];
    }
    cout<<sum<<endl;
}
//Second diagonal ka sum
void Seconddiagonal(int arr[1000][1000],int row, int col){
    int sum = 0;
    for(int i = 0; i < row;i++){
        sum = sum + arr[i][row-i-1];
    }
    cout<<sum<<endl;
}

//Transpose of a matrix
void transpose(int arr[1000][1000],int row,int col){
    for(int i = 0; i < row;i++){
        for(int j = i; j < col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}


int main(){

    int arr[1000][1000];
    int row;
    cout<<"Enter the number of rows in the array : ";
    cin>>row;
    int col;
    cout<<"Enter the number of cols in the array : ";
    cin>>col;
    inputArray(arr,row,col);
    printArray(arr,row,col);
    int target;
    cout<<"Enter the target for which u find in the array :";
    cin>>target;
    cout<<findtarget(arr,row,col,target)<<endl;
    cout<<findMax(arr,row,col)<<endl;
    cout<<findMin(arr,row,col)<<endl;
    rowWiseSum(arr,row,col);
    colWiseSum(arr,row,col);
    diagonalSum(arr,row,col);
    cout<<endl;
    Seconddiagonal(arr,row,col);
    cout<<endl;
    cout<<"printing before transpose : ";
    printArray(arr,row,col);
    cout<<endl;
    cout<<"Doing transpose : ";
    transpose(arr,row,col);
    cout<<endl;
    cout<<"printing after transpose : ";
    printArray(arr,row,col);
return 0;
}
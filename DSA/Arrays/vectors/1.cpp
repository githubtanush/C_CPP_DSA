// //Dynamic Array 
// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         int data;
//         cin>>data;
//         arr[i] = data;
//     }
// }
// void output(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of the array which u want : ";
//     cin>>n;
//     int *arr = new int[n];//each element would be 0, or garbage;
//     fun(arr,n);
//     cout<<endl;
//     output(arr,n);
//         return 0;
// }



//In vector don't tell size of vector just keep inserting it will manage the allocations
//na to user se puchna ki kitna data insert krna hai just insert krta jana hai
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
    int length = v.size();
    for(int i = 0; i < length;i++){
            cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v;
    //insert
    v.push_back(43);
    v.push_back(23);
    v.push_back(78);
    v.pop_back();
    print(v);
    //2d array
    cout<<endl;
    vector<vector<int> >arr(5,vector<int>(10,0));
    //printing
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //jagged array
    cout<<endl;
    cout<<endl; 
    vector<vector<int> >brr;
    vector<int> vec1(10,0);
    vector<int> vec2(5,1);
    vector<int> vec3(7,0);
    vector<int> vec4(8,1);
    vector<int> vec5(20,0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i = 0; i < brr.size();i++){
        for(int j = 0; j < brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}




// //Call by refrence
// #include<iostream>
// using namespace std;
// void incrementby1(int& n){
//     n = n + 1;
//     //return n;
// }
// int main(){
//     int n;
//     cin>>n;
//     //in upper we stored the value into n that means that increment the value
//     //n = incrementby1(n);
//     incrementby1(n);//so it proves that value pass by value n is not updated by new value if we not stored n not updated in this
//     cout<<n<<endl;
//     return 0;
// }
// //if we increment main value directly increment then use refrence variable
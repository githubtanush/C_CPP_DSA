#include<iostream>
#include<fstream>
using namespace std;
void writeToFile(char Filename[],char data[])//if u do not give 
//arguments in bracket then after open where bracket start you directly give filename inserted by in double quotes
{
    ofstream fout;
    fout.open(Filename,ios::app | ios:: binary);
    fout<<data;
    fout.close();
}
void readFromFile(char filename[]){
    char x;
    ifstream fin;
    fin.open(filename,ios::in);
    if(!fin)
        cout<<"File not found";
    else    
    {
        x = fin.get();
        fin>>x;
        while(!fin.eof()){
            cout<<x;
            x=fin.get();
        }
        fin.close();
    }
}
int main(){
    char filename[]="file1.txt";
    char data[]=" MySirG ";
    writeToFile("filename","data");
    readFromFile(filename);
    cout<<endl;
    return 0;
}
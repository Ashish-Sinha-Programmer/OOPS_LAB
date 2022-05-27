#include <iostream>
using namespace std;

struct Student{
    char Name[50];
    int Roll_No;
    float Marks;
};

int main(){
    Student S;
    cout<<"Enter information,"<<endl;
    cout<<"Enter the Name : ";
    cin>>S.Name;
    cout<<"Enter the Roll_No:";
    cin>>S.Roll_No;
    cout<<"Enter the marks : ";
    cin>>S.Marks;

    cout<<"/n Dispalying the information,"<<endl;
    cout<<"Name:"<< S.Name<<endl;
    cout<<"Roll_No"<<S.Roll_No<<endl;
    cout<<"Marks"<<S.Marks<<endl;

}
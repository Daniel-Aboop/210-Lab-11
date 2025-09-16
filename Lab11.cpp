// COMSC-210 | Lab 11 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <string>
using namespace std;
const int size=4,psize=3;

struct Computer{
    public:
    string operatingsys;
    int ram;
    string* programs;
~Computer(){
    delete[] programs;
    programs=nullptr;
}
};

//inputComputerData() takes a pointer to a Computer Struct
//Inputs the data for the struct, also initlaizes the array of strings and fills it
// i got a little confused on how i would do the input for the program array, but i realized that I had to use -> in order to access the member which I forgot.
void inputComputerData(Computer *roster){
    static int computerNum=1;
    cout<<"Computer Data for Computer #"<<computerNum<<endl;
    cout<<"Enter Operating system:";
    getline(cin,roster->operatingsys);
    cout<<endl;
    cout<<"Enter Ram amount:";
    cin>>roster->ram;
    cout<<endl;
    cout<<"Enter Program list:"<<endl;
    roster->programs=new string[psize];
    cin.ignore();
    for(int i=0;i<psize;i++){
        cout<<"Program #"<<i+1<<endl;
        getline(cin,roster->programs[i]);
    }
    computerNum++;
}
//displayComputerData() takes a pointer to a Computer Struct
// finishing this one was easy since it was just using pointers to access the members to output.
void displayComputerData(Computer *roster){
    static int computerNum=1;
    cout<<endl<<"Computer Data for #"<<computerNum<<endl<<endl;
    cout<<"Operating System: "<<roster->operatingsys<<endl<<endl;;
    cout<<"Ram Amount: "<<roster->ram<<"gb"<<endl<<endl;
    cout<<"Programs in system: ";
    for(int i=0;i<psize;i++){
        cout<<roster->programs[i]<<",";
    }
    cout<<endl;
    computerNum++;
}

int main(){
    cout<<endl;
    Computer *roster = new Computer[size];
    for(int i=0;i<size;i++){
        inputComputerData(&roster[i]);
    }
    for(int i=0;i<size;i++){
        displayComputerData(&roster[i]);
    }
    return 0;
}

// COMSC-210 | Lab 5 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
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
void inputComputerData(Computer *roster){


}
void displayComputerData(Computer *roster){

}

int main(){
    Computer *roster = new Computer[size];
    for(int i=0;i<size;i++){
        inputComputerData(&roster[i]);
    }

    return 0;
}
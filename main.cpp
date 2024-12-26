#include <iostream>
#include <string>
using namespace std;

struct streetLight
{
    string bulbType;
    string streetName;
    int numofBulbs;

};
int main(){
    streetLight light = {"Led", "main street", 10};

    cout<< light.bulbType<<endl;
}
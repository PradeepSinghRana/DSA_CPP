#include <iostream>
using namespace std;

int printHello(){
    cout << "hello everyone i am retruning an int with value 5" << endl;
    return 5;
}

int main(){

    int value = printHello();
    cout << "value using variable is: " << value << endl;

    cout << "value using function call is: " << printHello() << endl;

}
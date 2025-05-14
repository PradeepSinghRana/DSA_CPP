#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> vec1 = {'a', 'b', 'c'};
    cout << "v1: ";
    for (char c : vec1) {
        cout << c << " ";
    }
    cout << endl;

    cout << "size of vec1 = " << vec1.size() << endl;

    vec1.push_back('d');
    vec1.push_back('e');
    vec1.push_back('f');
    cout << "size of vec1 after inserting new elements = " << vec1.size() << endl;
    cout << "v1: ";
    for (char c : vec1) {
        cout << c << " ";
    }
    cout << endl;  

    vec1.pop_back();
    cout << "size of vec1 after removing 1  element = " << vec1.size() << endl;
    for (char c : vec1) {
        cout << c << " ";
    }
     cout << endl;

     cout << vec1.front() << endl; 
     cout << vec1.back() << endl;


     cout << vec1.at(2) << endl;
     cout << vec1[2] << endl;
     cout << vec1.at(3) << endl;
     cout << vec1.at(4) << endl;

   
     
    return 0;
}
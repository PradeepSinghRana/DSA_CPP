#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Declare a vector
    vector<int> vec;
    vec = {1, 2, 3, 4, 5};
    cout << vec[4] << endl;

    // Declare a vector second way
    vector<int> vec2 ={3, 5, 6, 8, 2, 0};
    cout << vec2[3] << endl;
    cout << vec2[2] << endl;
    cout << vec2[1] << endl;

    // Declare a vector third way
    vector<int> vec3(5, 0); // 5 elements initialized to 0
    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;
    cout << vec3[3] << endl;
    cout << vec3[4] << endl;

    vector<char> vec4={'p', 'r', 'a', 'd', 'e', 'e', 'p'};
    for(char i:vec4){
        cout << i << " These are the elements of vec4" << endl;
    }

    return 0;
}
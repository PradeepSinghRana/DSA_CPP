#include <iostream>
using namespace std;

// int main(){
    
//     int n = 5;
//     int k =1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<k; j++){
//             cout << "*" << " ";
//         }
//         k++;
//         cout << endl;
//     }

//     return 0;
// }


int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
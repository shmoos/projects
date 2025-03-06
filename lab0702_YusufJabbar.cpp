#include <iostream> 

using namespace std; 

int main() { 

    int int1; 
    int int2; 

    cout << "Enter int_x: ";
    cin >> int1;  
    cout << "Enter int_y: "; 
    cin >> int2; 

    swap(int1, int2); 

    cout << "After swap: " << endl; 
    cout << "int_x: " << int1 << endl; 
    cout << "int_y: " << int2 << endl; 

    return 0; 
}
/*Enter int_x: 4
Enter int_y: 3
After swap: 
int_x: 3
int_y: 4*/
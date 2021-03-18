# include <iostream>
using namespace std;

unsigned int findMissingNumberUsingXOR(unsigned int A[], int size){
    // Array elements from 1..size 
    // excluding one missing element
    unsigned int X{0};
    unsigned int Y{0};
    for(unsigned int i = 0; i < size; ++i){
        cout << X << Y << "\n";
        X ^= (A[i] ^ i+1);    
        cout <<"\t"<< X << Y << "\n";

    }
    return X ^ Y;
}

int main() {

    unsigned int A[] {1, 3, 4, 5, 6, 7};
    int size = 6;
    cout << findMissingNumberUsingXOR(A, size);
    return 0;
}
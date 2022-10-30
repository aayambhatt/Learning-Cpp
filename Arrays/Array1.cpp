#include <iostream>
using namespace std;

int main(){

// declare
int numbers[15];

//accessing an array
cout << "Value at 0 index :" << numbers[0] << endl;

//initiallising an array
int arr[3] = {5,7,11};

// accessing an element
cout << "value at 2nd index : " << arr[2] << endl;

int third[15] = {4,8,9};
int n = 15;
cout << "printing an array : " << endl;
//print an array
for ( int i=0 ; i<n ; i++)
{                             
    cout << third[i] << " ";

}



}
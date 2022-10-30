#include <iostream>
using namespace std;

//creating a function
void printArray(int arr[], int size)
{

cout << "Printing an array : " <<  endl;

//print the array
for( int i = 0 ; i<size ; i++){
    cout << arr[i] << " " ;
    

}
 cout << "printing done" << endl; 
}

int main(){


int first[5] = {2,5,8};
printArray(first, 5);

int second[10] =  {1,2,3,4};
printArray(second, 10);

}

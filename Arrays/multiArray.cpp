#include <iostream>

using namespace std;

int main()
{
    string branch[2][3] = { {"CSE", "ECE", "ME"}, {"CE","CHE","IE"}};
    
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++){
            
            cout << branch[i][j] << " ";
        }
            cout << endl;
        }

    return 0;
}

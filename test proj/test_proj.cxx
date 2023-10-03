#include <iostream>
#include <string.h>
#include <vector>
#include <AudioFile.h>

using namespace std;

int main()
{   
    vector<int> v1 ={1,2,3,4,5,6,7,8,9,10,11};
    int N = v1.size();
    for (int i=0;i<N;i++)
        cout << v1[i] << " ";

    cout << "\n" ;
}
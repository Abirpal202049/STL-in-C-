#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"Size of vector : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++){
        cout<< v[i]<< " ";
    }
    cout << endl;
}

int main(){
    // ? Array of vector
    // * Initializing a array of vectors
    vector<int> v1[3]={{1,2}, {1, 2, 3}, {1, 2, 3, 4}};
    for (int i = 0; i < 3; i++)
    {
        printVec(v1[i]);
    }


    // * Taking user input for the array of vectors and printing them
    int N;
    cin >> N;
    vector<int> v[N]; // this means we have made N vectors of 0 size

    for (int i = 0; i < N; i++){
        int n;
        cin>>n;
        for (int j = 0; j < n; j++){
            int x;
            cin>> x;
            v[i].push_back(x);
        }
    }

    // Printing the vectors
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    //! Here its behave like a 2D vector
    
    
    return 0;
}
// ! MY IDEA OF IMPLEMENTING THE VECTOR

#include<bits/stdc++.h>
#include"vectorprint.h"
using namespace std;

// void printVec(vector <int> v){
//     cout<<"SIZE : "<<v.size()<<endl;
//     for (int i = 0; i < v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

int main(){
    vector<vector<int>> v (3, vector<int> ());


    //* Taking the size of the Bigger vector
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        //* Taking the size of the Smaller vector
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            //* Taking the element for the smaller vector and inserting them 
            int x;
            cin >> x;
            v[i].push_back(x);
        }
        // v.push_back(v[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    cout<<"\nThe size of the vectors is : "<<v.size()<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    cout<<"The size of array : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout<<endl;
}


int main(){
    // vectors also allocate continious memory location in memory
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        // printVector(v);
        v.push_back(x); // O(1)
    }
    printVector(v);


    return 0;
}
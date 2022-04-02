#include<bits/stdc++.h>
using namespace std;

// * Passing the vector by reference
void printVec (vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ,";
    }
    cout<<"\b  \b";
    v.push_back(25);
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(4);

    vector<int> &v2 = v;
    v2.push_back(5);

    printVec(v);
    printVec(v);
    printVec(v2);
    return 0;
}
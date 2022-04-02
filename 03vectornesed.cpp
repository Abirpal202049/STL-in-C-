#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v){
    cout<<"Size of vector : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++){
        cout << "( "<< v[i].first << " "<<v[i].second<<" )" << endl;
    }
    cout << endl;
}

int main(){
    // ? Vector of Pair
    vector<pair<int, int> > v = {{1,2}, {2,3}, {4,5}, {6,7}};
    printVec(v);
    swap(v[1], v[2]);
    printVec(v);
    swap(v[0].first , v[3].first);
    printVec(v);


    // ? Vector of Pair with user input
    vector<pair<int, int> > v1 ;
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int p1, p2;
        cin>>p1>>p2;
        v1.push_back(make_pair(p1,p2));
        // v1.push_back({p1, p2});
    }
    printVec(v1);

    // ? By default vector of pair with size and and default elements
    vector<pair<int, int>> v3(3, {1,1});
    printVec(v3);
    
    return 0;
}
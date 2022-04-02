#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    cout<<"The size of array : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    v.push_back(156); // Here we are making vhanges on the 'v' not on 'v4' or 'v1' or 'v2'
    cout<<endl;
}

int main(){
    //* We can declear the size of the vectors while we are declearing the vector but we can also change it size during the run time 
    vector<int> v1(10);
    printVector(v1);
    v1.push_back(15);
    printVector(v1);

    // vector with size 5 and all the elements in the vector as 2
    vector<int> v2(5, 2);
    printVector(v2);


    vector<int> v3;
    v3.push_back(6);
    v3.push_back(15);
    printVector(v3);
    v3.pop_back(); // O(1)
    printVector(v3); 


    //* Copying one vector into another
    vector<int> v4 = v2; // Time Complexity - O(n)
    v4.push_back(148);
    cout<<"\n";
    printVector(v2);
    printVector(v4);

    // ! When we pass vector 'v4' onto the printVector function. then it copys 'v4' into 'v' and then it perform the operations


    return 0;
}
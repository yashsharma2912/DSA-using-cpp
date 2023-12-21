#include<bits/stdc++.h>
using namespace std;

main(){
    // declaration of the vector
    vector<int> vec;
    // function use to add elem in the last of the vector
    vec.push_back(20);
    vec.push_back(50);
    vec.push_back(40);
    vec.push_back(90);
    vec.push_back(80);
    //declaration of an iterator
       vector<int> :: iterator it;
    // used for loop to print our vector
    for(it=vec.begin(); it!=vec.end;it++)
      {
        cout<<*it<<" ";
      }
      cout<<endl;
// let's see how to sort the vector by using sort function
    sort(vec.begin(),vec.end());
    // we are printing the vector
    for(it=vec.begin(); it!=vec.end;it++)
      {
        cout<<*it<<" ";
      }
    return 0;
//let's check how to reverse the vector
    reverse(vec.begin().vec.end());
}
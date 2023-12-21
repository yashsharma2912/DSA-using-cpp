#include<bits/stdc++.h>
using namespace std;

// notes
/* 
    // vector allow us the duplication of the element 
    // vector is a dynamic array 
*/
main(){
// declaration of the vector
    vector<int> vec;
// function use to add elem in the last of the vector
    vec.push_back(20);
    vec.push_back(50);
    vec.push_back(40);
    vec.push_back(90);
    // element will be insert at the beginning
    vec.insert(vec.begin(),90);
  // +3 means element will be added after 3rd index
     vec.insert(vec.begin()+3,90);
  //  to delation of element from the vector
    vec.earase(vec.begin()+2);    
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
     // and print using "for loop"

// program to find an element in the vector
    int element = 20;
    auto it = find(vec.begin(),vec.end(),element);
     if (it != vec.end()){
        cout<<"element found";
     }else {
        cout<<"element not found";
     }
}
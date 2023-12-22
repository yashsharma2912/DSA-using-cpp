#include<bits/stdc++.h>
using namespace std;

// notes
/* 
    // set are store in a sorted manner
    // Set store only unique element 
*/
main(){
// declaration of the Set
    set<int> mySet;

// function use to add elem in the last of the Set
    mySet.insert(20);
    mySet.insert(25);
    mySet.insert(30);
     // duplication not allowed

//declaration of an iterator
       set<int> :: iterator it;

// used for loop to print our vector
    for(it=mySet.begin(); it!=mySet.end;it++)
      {
        cout<<*it<<" ";
      }
      cout<<endl;

//we can not reverse or sort the set
//we can just add and delete element from set
   mySet.erase(30);
// 30 will be removed from the set   

// program to find an element in the vector
   int element = 30;
   mySet.find(element);

return 0;
}
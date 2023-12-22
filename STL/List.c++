#include<bits/stdc++.h>
using namespace std;

main(){
    // declaration of the list 
    list<int> myList;
    // list also have same operation as like vector 
    // list has previous and next element only
    // for random access of an element we use vector
// reverse
   myList.reverse();
// push elem in the end   
   myList.pushback(30);
// sort
    myList.sort();
// find element in the list
    int element = 10 ;
    auto it3 = find(myList.begin(),myList.end(),element);
 // advance functions to push element in the list   
    advance(it3,3);
}
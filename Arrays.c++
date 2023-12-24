#include<bits/stdc++.h>
using namespace std;
        // collection of variables of homogenous datatype
        // contagious in nature
        // static in nature need give a perticular size to array
int main(){
    // declaration of an Array
    int myArr[5] = {1,2,3,4,5};
    string Arr2[4];
       Arr2[0] = "Yash";
        

    // declaration of an iterator    
   map<string, int> :: iterator it;

   // here we used loop to print the map
   for (it=myMap.begin(); it!=myMap.end(); it++){
     cout<<"key : " <<it->first << "value :" << it->second<<endl;
   } // we use arrow operator to fetch pointer 

// to find maximum key value in the map 
   max_element(myMap.begin(),myMap.end());
// to find any element from the map 
   int key = 102;
   myMap.find(key);
  // print map using for loop  
    return 0;
}
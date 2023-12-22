#include<bits/stdc++.h>
using namespace std;
        // map is an associative array
        // map stores key value pair
        // we can not store duplicate key 
int main(){
    // declaration of map 
    map<string , int> marksMap;
    // assigning values to the map for its keys
        marksMap["yash"] = 98;
        marksMap["om"] = 78;
        marksMap["atharva"] = 88;

    // declaration of an iterator    
   map<string, int> :: iterator it;

   // here we used loop to print the map
   for (it=myMap.begin(); it!=myMap.end(); it++){
     cout<<"key : " <<it->first << "value :" << it->second<<endl;
   } // we use arrow operator to fetch pointer 

// to find maximum key value in the map 
   max_element(myMap.begin(),myMap.end());
    return 0;
}
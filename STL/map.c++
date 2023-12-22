#include<bits/stdc++.h>
using namespace std;
        // map is an associative array
        // map stores key value pair
        // we can not store duplicate key 
int main(){
    map<string , int> marksMap;
        marksMap["yash"] = 98;
        marksMap["om"] = 78;
        marksMap["atharva"] = 88;
    // declaration of an iterator    
   map<string, int> :: iterator it;
   // here we used loop to print the map
   for (it=myMap.begin(); it!=myMap.end(); it++){
     cout<<"key : " <<it->first << "value :" << it->second<<endl;
   } // we use arrow operator to fetch pointer 
    return 0;
}
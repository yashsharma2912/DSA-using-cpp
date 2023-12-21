#include<bits/stdc++.h>
using namespace std;

main(){
    // declaration of the vector
    vector<int> marks;
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
    return 0;
}
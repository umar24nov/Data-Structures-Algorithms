#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Hashing{
    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size){
        buckets = size; 
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return (key % buckets);
    }
}
int main (){
    
    return 0;
}
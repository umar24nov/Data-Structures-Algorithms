#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> arr = {4,7,2,9,0,3,3,7,4,7,2,5,1};
    int n = arr.size();
    
    vector<bool> visited(n,false);

    for(int i = 0; i < n; i++){
        if(visited[i] == true) continue;
        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        cout << arr[i] << " occurs " << count << " times\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


void printArray(vector<vector<int>>& arr, int m, int n){
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> solve(vector<vector<int>>& arr, int m, int n, int r) {
    vector<int> result;
        for(int i = 0; i < n; i++){
            result.push_back(arr[r][i]);
        }
    return result;
}

int main() {

    int m;
    cout << "Enter rows : ";
    cin >> m;


    int n;
    cout << "Enter columns: ";
    cin >> n;


    vector<vector<int>> arr(m, vector<int>(n));

    cout << "Enter elements : ";
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    printArray(arr,m ,n);

    int r;
    cout << "Enter which row : ";
    cin >> r;

    vector<int> row = solve(arr,m,n,r);

    cout <<r<< " Row:\n";
    for(int x : row){
        cout << x << " ";
    }

    return 0;
}
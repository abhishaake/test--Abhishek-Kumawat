#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> first (int row, int col){
    
    vector<vector<int>> arr(row, vector<int>(col));
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col;j++){
            
            int num = rand()%101;
            
            arr[i][j] = num;
            
        }
        
    }
    
    return arr;
    
}

int c = 0;
bool cmp(vector<int> &a, vector<int> &b){
    return a[c] <= b[c];
}

vector<vector<int>> second (vector<vector<int>> arr, int col){
    c = col;
    sort(arr.begin(),arr.end(),cmp);
    
    return arr;
    
}

int main()
{
    int row, col;
    cin>>row>>col;
    
    vector<vector<int>> arr = first(row,col);
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col;j++){
            
            cout<< arr[i][j] << " ";
            
        }
        
        cout<< endl;
        
    }
    int col2;
    cin>>col2;
    
    arr = second(arr, col2);
    
for(int i=0; i<row; i++)
    {
        for(int j=0; j<col;j++){
            
            cout<< arr[i][j] << " ";
            
        }
        
        cout<< endl;
        
    }

   
}

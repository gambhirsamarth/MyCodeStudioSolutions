#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int>arr1(n,-1),arr2(m,-1);
        for(int i = 0;i<n;i++){
               for(int j = 0; j<m; j++){
                   if(matrix[i][j]==0){
                       arr1[i] = 0;
                       arr2[j] = 0;
                   }
               }
            }
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                if(arr1[i] ==0 ||arr2[j] ==0)
                    matrix[i][j] =0;
            }
     }
}

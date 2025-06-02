#include<bits/stc++.h>


void rotate_matrix(vector<vector<int>> &m){
  int n = m.size();

  // transposing the matrix
  for(int i=0;i<n;i++){
    for(int k=0;k<i;k++){
      swap(m[i][k],m[k][i]);
    }
  }

  //reversing the matrix, it will also be the result
  for(int i=0;i<n;i++){
    reverse(m[i].begin(),m[i].end());
  }
}


int main(){
  return 0;
}

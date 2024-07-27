#include<iostream>
#include<vector>
using namespace std;

void changeRowandColumnofZero(vector<vector<int>>&v){
    vector<vector<int>>v1(v.size(),vector<int>(v[0].size(),1));

    for(int i =0;i<v.size();i++){
    for (int j = 0; j < v[i].size(); j++)
    {
        if(v[i][j]==0){
            for(int k=0;k<v[i].size();k++){
                v1[i][k]=0;
            }
            for(int k=0;k<v.size();k++){
                v1[k][j]=0;
            }
        }
    }
    
}
  for(int i =0;i<v.size();i++){
    for (int j = 0; j < v[i].size(); j++){
        if(v1[i][j]==0)
        v[i][j]=0;
    }
    }
}

int main()
{

int m,n;
cin>>m>>n;
vector<vector<int>>v(m,vector<int>(n));
for(int i =0;i<m;i++){
    for (int j = 0; j < n; j++)
    {
        cin>>v[i][j];
    }
    
}
changeRowandColumnofZero(v);
for(int i =0;i<m;i++){
    for (int j = 0; j < n; j++)
    {
        cout<<v[i][j]<<" ";
    }cout<<endl;
    
}
return 0;
}
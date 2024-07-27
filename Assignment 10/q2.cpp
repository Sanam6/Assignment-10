#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate90deg(vector<vector<int>>&v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i =0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
}

int main()
{
int n;
cin>>n;
vector<vector<int>>v(n,vector<int>(n));
for(int i =0;i<n;i++){
    for (int j = 0; j < n; j++)
    {
        cin>>v[i][j];
    }
    
}
rotate90deg(v);
cout<<"Updated Matrix\n";

for(int i =0;i<n;i++){
    for (int j = 0; j < n; j++)
    {
        cout<<v[i][j]<<" ";
    }cout<<endl;
    
}
return 0;
}
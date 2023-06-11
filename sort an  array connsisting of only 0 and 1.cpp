#include<iostream>
using namespace std;
#include<vector>

void sortzeroesandone(vector<int> &v){

    int zeroescount =0;
    for(int i=0 ; i<v.size(); i++){
        if(v[i]==0){
            zeroescount++;

        }
    }

    for(int i=0 ; i<v.size() ; i++){
        if(i<zeroescount){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

int main(){
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    vector<int>v;
    for(int i=0 ; i<n ;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortzeroesandone(v);

    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&v, int target){

if(target==0){
    return 0;
}
if (target<0){
    return INT_MAX;
}
int mini=INT_MAX;
for(int i=0;i<v.size();i++){
    int ans=INT_MAX;
    ans=solve(v, target-v[i]);
    if(ans!=INT_MAX){
        mini=min(mini, 1+ans);
    }

}

return  mini;


}

int main(){
vector<int>v({1,2,3,4,5});



int target=20;
int ans=solve(v, target );
if(ans==INT_MAX){
    cout<< -1;
}

else{
    cout<<ans;
}

    return 0;
}
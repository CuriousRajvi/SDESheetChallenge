#include<bits/stdc++.h>
int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
    unordered_map<int,int> mp;
    queue<vector<int>>q;
    for(int i=0;i<inorder.size();i++){
        mp[inorder[i]]=i;
    }
    
    if(mp.find(levelOrder[0])!=mp.end()){
        if(mp[levelOrder[0]]==inorder.size()-1)
            q.push({0,(int)inorder.size()-2,1});
        else if(mp[levelOrder[0]]==0)
            q.push({1,(int)inorder.size()-1,1});
        else{
            q.push({0,mp[levelOrder[0]]-1,1});
            q.push({mp[levelOrder[0]]+1,(int)inorder.size()-1,1});
        }
    }
        int k=1;
        int ans=0;
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            ans=max(ans,temp[2]);
            if(mp.find(levelOrder[k])!=mp.end()){
                if(temp[0]==temp[1])
                  ans=max(ans,temp[2]+1);
                else if(mp[levelOrder[k]]==temp[1])
                    q.push({temp[0],temp[1]-1,temp[2]+1});
                else if(mp[levelOrder[k]]==temp[0])
                    q.push({temp[0]+1,temp[1],temp[2]+1});
                else
                {
                    q.push({temp[0],mp[levelOrder[k]]-1,temp[2]+1});
                    q.push({mp[levelOrder[k]]+1,temp[1],temp[2]+1});
                }
            }
            k++;
        }
        return ans-1;
    }

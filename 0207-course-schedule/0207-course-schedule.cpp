class Solution {
public:
    bool isCycle(int src,  vector<int>&vis, vector<int>&recPath, vector<vector<int>>&edges){
       vis[src]=true;
       recPath[src]=true;

        for(int i=0;i<edges.size();i++){
            int u = edges[i][1];
            int v = edges[i][0];

            if(u==src){
                if(!vis[v]){
                    if(isCycle(v,vis,recPath,edges)) return true;
                }
                else if(recPath[v]) return true;
            }
        }
        recPath[src] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>vis(numCourses);
        vector<int>recPath(numCourses);
        
        for(int i=0;i<numCourses;i++){
            if(isCycle(i,vis,recPath,prerequisites)) return false;
        }
        return true;
    }
};
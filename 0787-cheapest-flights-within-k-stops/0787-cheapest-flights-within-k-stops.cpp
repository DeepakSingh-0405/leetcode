class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>graph(n);
        for(int i=0;i<flights.size();i++){
            int u = flights[i][0];
            int v = flights[i][1];
            int wt = flights[i][2];
            graph[u].push_back({v,wt});
        }

        queue<tuple<int,int,int>>q;
        vector<int>dist(n,INT_MAX);

        dist[src]=0;
        q.push({src,0,-1});

        while(!q.empty()){

            auto [u,cost,step] = q.front();
            q.pop();

            for( auto x : graph[u]){
                int v = x.first;
                int wt = x.second;

                if(dist[v]>cost+wt && step+1<=k){
                    q.push({v,cost+wt,step+1});
                    dist[v] = cost+wt;
                }
            }
        }

        if(dist[dst]==INT_MAX) return -1;
        return dist[dst];
    }
};
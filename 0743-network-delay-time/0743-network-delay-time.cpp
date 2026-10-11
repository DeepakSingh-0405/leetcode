class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    priority_queue<pair<int, int>, vector<std::pair<int, int>>, greater<std::pair<int, int>>> pq;
    vector<int>dist(n+1,INT_MAX);
    dist[k]=0;

    pq.push({0,k});
    while(pq.size()>0){
        pair<int,int> temp = pq.top();
        int u=temp.second;
        pq.pop();
        for(int i=0;i<times.size();i++){
            if(times[i][0]==u){
                if(dist[times[i][1]] > dist[u]+times[i][2]){
                    dist[times[i][1]] = dist[u]+times[i][2];
                    pq.push({dist[times[i][1]], times[i][1]});
                }
            }
        }
    }
    int mx=0;
    for(int i=1;i<=n;i++){
        if(dist[i]==INT_MAX) return -1;
        mx = max(mx,dist[i]);
    }
    return mx;

}
};
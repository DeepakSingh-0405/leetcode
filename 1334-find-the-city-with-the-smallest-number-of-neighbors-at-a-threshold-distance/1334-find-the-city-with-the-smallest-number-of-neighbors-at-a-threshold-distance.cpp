
class Solution {
public:
    vector<int> dijkstra(vector<vector<int>>& edges, int dt, int n, int src) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], e[2]});
        }

        vector<int> dist(n, INT_MAX);
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u]) continue;

            for (auto [v, w] : adj[u]) {
                if (d + w < dist[v]) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }

        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (i != src && dist[i] <= dt) {
                res.push_back(i);
            }
        }

        return res;
    }

    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        int city = -1;
        int minCount = INT_MAX;

        for (int i = 0; i < n; i++) {
            vector<int> res = dijkstra(edges, distanceThreshold, n, i);
            int count = res.size();

            if (count <= minCount) {
                minCount = count;
                city = i;
            }
        }

        return city;
    }
};

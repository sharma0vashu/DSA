class Solution {
public:
   
bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> color(n, -1); // -1 means uncolored

    for (int start = 0; start < n; start++) {
        if (color[start] == -1) { // not visited
            queue<int> q;
            q.push(start);
            color[start] = 0; // start with color 0

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (auto neigh : graph[node]) {
                    if (color[neigh] == -1) {
                        color[neigh] = 1 - color[node];
                        q.push(neigh);
                    }
                    else if (color[neigh] == color[node]) {
                        return false; // same color on both sides => not bipartite
                    }
                }
            }
        }
    }
    return true;
}


};
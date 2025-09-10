class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& state) {
        // state: 0 = unvisited, 1 = visiting, 2 = safe
        if (state[node] != 0) return state[node] == 2; 
        
        state[node] = 1; // visiting
        for (auto nei : graph[node]) {
            if (!dfs(nei, graph, state)) 
                return false; // cycle found
        }
        state[node] = 2; // safe
        return true;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> state(n, 0);
        vector<int> safeNodes;
        
        for (int i = 0; i < n; i++) {
            if (dfs(i, graph, state)) 
                safeNodes.push_back(i);
        }
        
        return safeNodes;
    }
};

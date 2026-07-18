#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9;
int n, m,k;
int S,T;
vector<vector<int>> adj;
vector<vector<int>> capacity;



int bfs(vector<int> & parent) {
    fill(parent.begin(), parent.end(), - 1);
    parent[S] = -2;
    queue<pair<int , int>> q;
    q.push({S, INF});

    while (!q.empty()) {
    	int u = q.front().first;
    	int flow = q.front().second;
    	q.pop();

    	for(int v : adj[u]){
    		if(parent[v] == -1 && capacity[u][v] > 0){
    			parent[v] = u;
    			int new_flow = min(flow, capacity[u][v]);

    			if(v == T){
    				return new_flow;
    			}
    			q.push({v, new_flow});
    		}
    	}
    }
    return 0;
}

int edmonds_karp(){
	int max_flow = 0;
	vector<int> parent(n + m + 2);
	int new_flow;

	while (( new_flow = bfs(parent)) > 0){
		max_flow += new_flow;
		int curr = T;

		while (curr != S){
			int prev = parent[curr];
			capacity[prev][curr] -= new_flow;
			capacity[curr][prev] += new_flow;
			curr = prev;
		}
	}
	return max_flow;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m  >> k;
    S = 0;
    T = n + m + 1;
    int total_nodes = n + m + 2;

    adj.assign(total_nodes, vector<int>());
    capacity.assign(total_nodes, vector<int>(total_nodes, 0));
    // noi dinh nam
    for(int i = 1; i<= n;i++){
    	adj[S].push_back(i);
    	adj[i].push_back(S);
    	capacity[S][i] = 1;
    }
    // noi dinh nu
    for(int j = 1;j <= m;j++){
    	int famale_node = n + j;
    	adj[famale_node].push_back(T);
    	adj[T].push_back(famale_node);
    	capacity[famale_node][T] = 1;
    }
    for(int i = 0;i < k;i++){
    	int u , v;
    	cin >> u >> v;
    	int famale_node = n + v;

    	adj[u].push_back(famale_node);
    	adj[famale_node].push_back(u);
    	capacity[u][famale_node] = 1;
    }

    int max_matches = edmonds_karp();

    cout << max_matches << "\n";

    for(int u = 1;u <= n;u++){
    	for(int v = 1;v <= m;v++){
    	int famale_node = n + v;
    	//capacity[famale_node][u] == 1 check canh nguoc sinh ra flow
    	//ktra u va famale_node co noi tu dau khong de in ra
    	if ( capacity[famale_node][u] == 1 && capacity[u][famale_node] == 0){
    		cout << u << " " << v << "\n";
    	}
    }
   }

    return 0;
}
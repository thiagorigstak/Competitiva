// A simple representation of graph using STL,
// for the purpose of competitive programming
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(int u, vector<int> adj[],
					vector<bool> &visited)
{
	visited[u] = true;
	cout << u << " ";
	for (int i=0; i<adj[u].size(); i++)
		if (visited[adj[u][i]] == false)
			DFSUtil(adj[u][i], adj, visited);
}

// This function does DFSUtil() for all
// unvisited vertices.
void DFS(vector<int> adj[], int V)
{
	vector<bool> visited(V, false);
	for (int u=0; u<V; u++)
		if (visited[u] == false)
			DFSUtil(u, adj, visited);
}

// Driver code
int main()
{
	int V = 5;

	// The below line may not work on all
	// compilers. If it does not work on
	// your compiler, please replace it with
	// following
	// vector<int> *adj = new vector<int>[V];
	vector<int> adj[V];

	// Vertex numbers should be from 0 to 4.
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	DFS(adj, V);
	return 0;
}

/* 
outra forma de percorrer um grafo é fazer percorrimento em profundidade, também de chamado de DFS(Depth-first search). O algoritmo se chama assim porque funciona de uma forma que sempre vamos 'mergulhar' no grafo o mais fundo que pudermos. Quando não for mais possível ir mais fundo no grafo, voltamos até que seja ir mais fundo novamente, sem repetir vértices já visitados.

A implementação do DFS mais comum é recursiva, por ser mais intuitiva. Assim como o exemplo anterior, esse programa simplesmente percorre o grafo, mas na ordem que um DFS percorre.

 */
vector<vector<int>> graph;
vector<bool> visited;     // globais, inicializados na main.

void dfs(int vertex){ // na main chamamos dfs(start), aonde start é o vértice que começamos o dfs
    visited[vertex] = true;

    for(int w: graph[vertex]){
        if(!visited[w]){
            dfs(w);
        }
    }    
}
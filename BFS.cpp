// A Quick implementation of BFS using
// vectors and queue
#include <bits/stdc++.h>
#define pb push_back

using namespace std;

vector<bool> v;
vector<vector<int> > g;

void edge(int a, int b)
{
	g[a].pb(b);

	// for undirected graph add this line
	// g[b].pb(a);
}

void bfs(int u)
{
	queue<int> q;

	q.push(u);
	v[u] = true;

	while (!q.empty()) {

		int f = q.front();
		q.pop();

		cout << f << " ";

		// Enqueue all adjacent of f and mark them visited
		for (auto i = g[f].begin(); i != g[f].end(); i++) {
			if (!v[*i]) {
				q.push(*i);
				v[*i] = true;
			}
		}
	}
}

// Driver code
int main()
{
	int n, e;
	cin >> n >> e;

	v.assign(n, false);
	g.assign(n, vector<int>());

	int a, b;
	for (int i = 0; i < e; i++) {
		cin >> a >> b;
		edge(a, b);
	}

	for (int i = 0; i < n; i++) {
		if (!v[i])
			bfs(i);
	}

	return 0;
}

/* Uma das formas de percorrer um grafo é fazer um percorrimento em largura. Começamos a explorar os vértices do grafo a partir de um certo vértice a. E a ordem que vamos navegando entre os vértices é de forma que os mais próximos a a sempre serão visitados antes. Então, primeiro a será visitado, depois os vértices que são adjacentes a a(distância 1), depois os vértices que estão a duas arestas de distância, e assim por diante. Como os vértices mais próximos são sempre visitados antes, esse algoritmo serve para, por exemplo, dizer qual a distância mínima entre dois vértices no grafo.

Esse comportamento é implementado usando-se uma fila. Primeiro insere-se na fila o vértice inicial, e começa-se a desenfileirar da fila enquando houver algum nodo. Quando um vértice a é desenfileirado, enfileram-se todos os vértice adjacentes a a que não foram visitados. Caso não marquemos os visitados, e o grafo tiver ciclos, nosso programa não terminará.

O algoritmo a baixo é um BFS que simplesmente percorre o grafo. */


void bfs(int start){
    
    queue<int> q;
    q.push(start);

    vector<bool> visited(GRAPH_MAX_SIZE,false);

    while(q.size()){//Enquanto houver vértices na fila

        // Retire o vértice da frente
        int u = q.front();
        q.pop();
        visited[u] = true;

        for(int w: graph[u]){ // Para cada vértice adjacente a u
            if(!visited[w]){
                q.push(w);
            }
        }
    }

}

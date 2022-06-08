// Program C++ yang merepresentasi undirected dan weighted graph ke dalam bentuk adjacency-list.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// function untuk menambahkan edge dan deklarasi variabel untuk edge
void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt) {
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

// Function untuk merubah graph menjadi adjacency list
void printGraph(vector<pair<int,int> > adj[], int V) {
    
    // deklarasi variabel
	int v, w;
	
	// perulangan bersarang untuk adjacency-list
	// perulangan untuk setiap baris nya
	for (int u = 1; u < V; u++) {
		cout << u;
		
		// perulangan untuk menampilkan nilai edge dalam array
		for (auto it = adj[u].begin(); it!=adj[u].end(); it++) {
			v = it->first;
			w = it->second;
			
			// tampilan dari struktur program
			cout  << " => " << "[" << v << "," << w << "]";
		}
		cout << "\n";
	}
}

// function untuk adjacency-list
int main() {
	int V = 5;
	vector<pair<int, int> > adj[V];
	//menambahkan nilai edge
	addEdge(adj, 1, 2, 5);
	addEdge(adj, 2, 3, 1);
	addEdge(adj, 4, 1, 3);
	addEdge(adj, 2, 4, 1);
	addEdge(adj, 3, 1, 1);
	
	// mencetak graph
	printGraph(adj, V);
	
	cout << "\ndevelop @mahendrarendi";
	return 0;
	
}

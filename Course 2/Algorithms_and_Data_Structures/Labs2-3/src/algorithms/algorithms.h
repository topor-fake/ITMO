#pragma once

#include "../graph/Graph.h"

using namespace std;

list<Vertex*> Dijkstra(Graph* graph, string startName, string destinationName);
list<Vertex*> BellmanFord(Graph* graph, string startName, string destinationName);

Graph* Prim(Graph* graph, string startName);
Graph* Kruskal(Graph* graph);

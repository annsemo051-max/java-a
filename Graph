import java.util.*;

public class GraphTraversal {
    private int vertices;
    private LinkedList<Integer>[] adjList;
    private boolean isDirected;

    @SuppressWarnings("unchecked")
    public GraphTraversal(int vertices, boolean isDirected) {
        this.vertices = vertices;
        this.isDirected = isDirected;
        adjList = new LinkedList[vertices];
        for (int i = 0; i < vertices; i++) {
            adjList[i] = new LinkedList<>();
        }
    }

    // Add an edge between source and destination
    public void addEdge(int src, int dest) {
        adjList[src].add(dest);
        if (!isDirected) {
            adjList[dest].add(src);
        }
    }

    // 1. Breadth-First Search (BFS) using a Queue
    public void bfs(int startVertex) {
        boolean[] visited = new boolean[vertices];
        Queue<Integer> queue = new LinkedList<>();

        visited[startVertex] = true;
        queue.add(startVertex);

        System.out.print("BFS starting from vertex " + startVertex + ": ");
        while (!queue.isEmpty()) {
            int current = queue.poll();
            System.out.print(current + " ");

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    queue.add(neighbor);
                }
            }
        }
        System.out.println();
    }

    // 2. Depth-First Search (DFS) using recursion
    public void dfs(int startVertex) {
        boolean[] visited = new boolean[vertices];
        System.out.print("DFS starting from vertex " + startVertex + ": ");
        dfsRec(startVertex, visited);
        System.out.println();
    }

    private void dfsRec(int current, boolean[] visited) {
        visited[current] = true;
        System.out.print(current + " ");

        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                dfsRec(neighbor, visited);
            }
        }
    }

    // Display adjacency list
    public void printGraph() {
        System.out.println("Graph Adjacency List (" + (isDirected ? "Directed" : "Undirected") + "):");
        for (int i = 0; i < vertices; i++) {
            System.out.println("Vertex " + i + " -> " + adjList[i]);
        }
    }

    public static void main(String[] args) {
        // Undirected graph with 6 vertices (0 to 5)
        GraphTraversal graph = new GraphTraversal(6, false);
        graph.addEdge(0, 1);
        graph.addEdge(0, 2);
        graph.addEdge(1, 3);
        graph.addEdge(1, 4);
        graph.addEdge(2, 4);
        graph.addEdge(3, 5);
        graph.addEdge(4, 5);

        graph.printGraph();
        graph.bfs(0);
        graph.dfs(0);
    }
}

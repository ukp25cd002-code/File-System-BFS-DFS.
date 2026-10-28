File System Representation and Search Using BFS and DFS

Objective

To represent a file system as a graph using an adjacency matrix and search for files using BFS and DFS algorithms.

Algorithms

BFS (Breadth-First Search)

1. Start from the given node.
2. Add it to the queue.
3. Visit adjacent unvisited nodes.
4. Repeat until the queue is empty.
5. Display whether the file is found.

DFS (Depth-First Search)

1. Start from the given node.
2. Mark it as visited.
3. Visit adjacent unvisited nodes recursively.
4. Continue until all reachable nodes are visited.
5. Display whether the file is found.

How to Run

1. Compile the program:

gcc file_search.c -o file_search

2. Run the program:

./file_search

3. Enter the node names, adjacency matrix, starting node index, and target file name.

Sample Output

BFS Traversal: Root Docs Images a.txt b.pdf photo.jpg
File found using BFS.

DFS Traversal: Root Docs a.txt b.pdf Images photo.jpg
File found using DFS.

Conclusion

This project demonstrates graph representation and file searching using BFS and DFS in C.

Files

- "file_search.c" – C program
- "README.md" – Project description
- "sample_output.txt" – Sample output

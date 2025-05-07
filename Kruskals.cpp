#include <iostream>
using namespace std;

#define MAX 10
#define INF 999

int cost[MAX][MAX];
int parent[MAX];

int find(int i) {
    while (i != parent[i])
        i = parent[i];
    return i;
}

void kruskal(int n) {
    int edges = 0, totalCost = 0;

    while (edges < n - 1) {
        int min = INF, u = -1, v = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (cost[i][j] && cost[i][j] < min) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }

        int pu = find(u);
        int pv = find(v);

        if (pu != pv) {
            cout << "Edge: " << u << " - " << v << " | Cost: " << min << endl;
            totalCost += min;
            parent[pu] = pv;
            edges++;
        }

        cost[u][v] = cost[v][u] = 0;
    }

    cout << "Total Minimum Cost: " << totalCost << endl;
}

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter cost matrix (0 for no edge):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> cost[i][j];

    for (int i = 0; i < n; i++)
        parent[i] = i;

    kruskal(n);
    return 0;
}

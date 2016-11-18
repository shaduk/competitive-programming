#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <utility>
#include <climits>
#include <queue>
#include <fstream>
#include <algorithm>
#include <stdio.h>
using namespace std;

class HeapDS
{
private:
    int maxSize;
    int H[100001];
    int parent[100001];
    long long int key[100001];
    int size;
    
    
    void swap(int i, int j)
    {
        int temp = H[i];
        H[i] = H[j];
        H[j] = temp;
        parent[H[i]] = i;
        parent[H[j]] = j;
    }
    
    void shiftDown(int s)
    {
        int maxIndex = s;
        if(2*s <= size && key[H[maxIndex]] > key[H[2*s]])
            maxIndex = 2*s;
        if(2*s + 1 <= size && key[H[maxIndex]] > key[H[2*s + 1]])
            maxIndex = 2*s + 1;
        if(s != maxIndex)
        {
            swap(s, maxIndex);
            shiftDown(maxIndex);
        }
    }
    
    void shiftUp(int s)
    {
        if(key[H[s/2]] > key[H[s]])
        {
            swap(s, s/2);
            shiftUp(s/2);
        }
    }
    
public:
    
    HeapDS()
    {
        maxSize = 100001;
        size = 0;
    }
    
    void reducePriority(int s, int newp)
    {
        key[s] = newp;
        shiftUp(parent[s]);
    }
    
    void insert(int index, long long int priority)
    {
        if(size == maxSize)
        {
            cout << "Error" << endl;
            return;
        }
        size = size + 1;
        H[size] = index;
        parent[index] = size;
        key[index] = priority;
        shiftUp(size);
    }
    
    bool isEmpty()
    {
        if(size <= 0)
            return true;
        return false;
    }
    
    int extractMin()
    {
        if(size <= 0)
        {
            cout << "Heap Empty";
            return -1;
        }
        int result = H[1];
        swap(1,size);
        size = size-1;
        shiftDown(1);
        return result;
    }
    
    
};


class Dijkstra {
    
private:
    int N, E, start;
    vector< pair<int, int> > adj[100001];
    long long int key[100001];
    bool visited[100001];
    HeapDS myHeap;
    
    void initialize()
    {
        for(int i = 1; i <= N; i++)
            key[i] = INT_MAX;
        for(int i = 1; i <= N; i++)
            myHeap.insert(i, key[i]);
        for(int i = 1; i <= N; i++)
            visited[i] = false;
    }
    
    void readData()
    {   
        scanf("%d",&N);
        scanf("%d", &E);
            while(E--)
            {
                int i, j, w;
                scanf("%d", &i);
                scanf("%d", &j);
                scanf("%d", &w);

                adj[i].push_back(make_pair(j,w));
                adj[j].push_back(make_pair(i,w));
            }
            scanf("%d", &start);
    }
    
    
    void calculatePath()
    {
        int visit;
        myHeap.reducePriority(start, 0);
        key[start] = 0;
        while(!myHeap.isEmpty())
        {
            visit = myHeap.extractMin();
            visited[visit] = true;
            
            for(int i = 0; i < adj[visit].size(); i++)
            {
                if(!visited[adj[visit][i].first] && (adj[visit][i].second + key[visit] < key[adj[visit][i].first]))
                {
                    key[adj[visit][i].first] = adj[visit][i].second + key[visit];
                    myHeap.reducePriority(adj[visit][i].first, key[adj[visit][i].first]);
                }
            }
        }
        return;
    }
    
    void print()
    {
        for(int i = 1; i <= N; i++)
            {
            if(i!=start && key[i] == INT_MAX)
                printf("-1 ");
            else if(i != start)
                printf("%llu ", key[i]);
        }
        printf("\n");
    }
public:
    
    Dijkstra()
    {
    }
    
    void solve()
    {
        readData();
        initialize();
        calculatePath();
        print();
    }

    
};

int main() {
    int test;
    scanf("%d",&test);
    while(test--)
        {
        Dijkstra algo;
        algo.solve();
    }
    return 0;
}

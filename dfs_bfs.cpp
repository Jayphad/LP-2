/* Jay Phad
Amruvahini College Of Engineering
Represent a given graph using adjacency matrix & perform DFS in 
recursive & non-recursive method. 
*/
#include<iostream>
#include<vector>
#include<stack>
#define max_size 10
using namespace std;
int g[max_size][max_size];
int n;
vector<int>visited(max_size,0);
//stack<int>s;

void DFS(int v)
{
	cout<<v<<"->";
	visited[v]=1;
	for(int i=0;i<n;i++)
	{
		if(g[v][i]==1 && !visited[i])
		{
			DFS(i);
		}
	}
	
}
//void DFS1(int v)
//{
//	s.push(v);
//	while(!s.empty())
//	{
//		v=s.top();
//		s.pop();
//		if(!isvisited(v))
//		{
//			cout<<v<<"->";
//			visited[v]=1;
//			for(int i=0;i<n;i++)
//			{
//				if(g[v][i]==1&& !isvisited(i))
//				{
//				
//				s.push(i);
//				}
//			}	
//		}	
//	}	
//}
  void bfs(int v) {
    cout << v << " ";
    int queue[max_size], front = 0, rear = 0;
    visited[v] = 1;
    queue[rear++] = v;

    while (front < rear) {
        int curr = queue[front++]; 
        for (int i = 0; i < n; i++) {
            if (g[curr][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
                cout << i << " ";
            }
        }
    }
}
int main()
{
	int v;
	cout<<"Enter the value of n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j && i<j)  //no self loop
			{
				cout<<i<<" -> "<<j<<":";
				cin>>g[i][j];
				g[j][i]=g[i][j];
				
			}
		}	
	}
	//Display
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
				cout<<g[i][j]<<"  ";	
		}
		cout<<endl;
	}
	cout<<"Enter the vertex to start the DFS";
	cin>>v;
	int ch;
	cout<<"Enter Your Choice : 1.DFS  2.BFS"<<endl;
	cin>>ch;
	switch(ch){
	
		case 1:
				DFS(v);
				break;
		case 2: 
				for(int i=0;i<max_size;i++)
				{
					visited[i]=0;
				}
				bfs(v);
				break;
				
	}
//		return 0;
}

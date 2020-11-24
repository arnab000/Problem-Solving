#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define IOS std::ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
using namespace std;

// DEBUG TEMPLATE
void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}

void OFFLINE(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #define debug(x...) cout << "[" << #x << "] = ["; _print(x)
        #else
            #define debug(x...)
    #endif
}

const int MOD = 1e9 + 7;
vector<vector<char>> grid(2001, vector<char>(2001));
vector<vector<int>> dis(2001, vector<int>(2001, INT_MAX));
vector<vector<pair<int, int>>> edges(26);
vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
bool vis[2005][2005];
int r, c;
bool isValid(int x, int y) {
    return ((x > 0 && x <= r && y > 0 && y <= c) && grid[x][y] != '#' && !vis[x][y]);
}
bool cha[30];

int bfs(pair<int, int> src, pair<int, int> des) {

    queue<pair<int, int>> q;
    q.push(src);
    dis[src.F][src.S] = 0;
   vis[src.F][src.S]=true;

    while(!q.empty()) {
        
        int cx = q.front().F;
        int cy = q.front().S;
        q.pop();

        char node = grid[cx][cy];
    

        if('a'<=node && node<='z') {
            if(!cha[node-'a']){
            for(auto x : edges[node - 'a']) {
                if(isValid(x.F,x.S)){
                q.push(x);
                dis[x.F][x.S] = min(dis[x.F][x.S], dis[cx][cy] + 1);
                vis[x.F][x.S]=true;
                }
            }
            cha[node-'a']=true;
            }
        }

        for(int i = 0; i < 4; i++) {
            int nx = cx + dirs[i].F, ny = cy + dirs[i].S;
            if(isValid(nx, ny)) {
                q.push({nx, ny});
                dis[nx][ny] = min(dis[nx][ny], dis[cx][cy] + 1);
                 vis[nx][ny]=true;
            }
        }
        if(vis[des.F][des.S])
        break;
    }

    return dis[des.F][des.S];
}

int main(){

    IOS;
    OFFLINE();
    //check for corner test cases

    cin >> r >> c;
    pair<int, int> src, des;
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            char node;
            cin >> node;
            grid[i][j] = node;
            if(node == 'S') {
                src.F = i, src.S = j;
            } else if(node == 'G') {
                des.F = i, des.S = j;
            } else if(isalpha(node)) {
                edges[node - 'a'].pb({i, j});
            }
        }
    }

    int ans = bfs(src, des);
    
    cout << ((ans == INT_MAX) ? -1 : ans) << "\n";

    //check for corner test cases
    return 0;
}
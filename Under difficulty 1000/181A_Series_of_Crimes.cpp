#include <bits/stdc++.h> 
using namespace std; 
  
pair<int, int> findFourthVertex(int n, int m, vector<string> s) 
{ 
    map<int, int> row, col; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)  
            if (s[i][j] == '*') 
            { 
                row[i]++; 
                col[j]++; 
            } 
    int x, y; 
    for (auto tm : row) 
        if (tm.second == 1) 
            x = tm.first; 
    for (auto tm : col) 
        if (tm.second == 1) 
            y = tm.first; 
  
    return make_pair(x + 1, y + 1); 
} 
  
 
int main() 
{ 
    vector<string> s;
    string temp = "";
    int n, m, i, j;
    cin>>n>>m; 
    for (i = 0; i < n; i++)
    {
        cin>>temp;
        s.push_back(temp);
        temp = "";
    }
  
    auto rs = findFourthVertex(n, m, s); 
    cout << rs.first << " " << rs.second; 
} 
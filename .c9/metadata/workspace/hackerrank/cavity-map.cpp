{"filter":false,"title":"cavity-map.cpp","tooltip":"/hackerrank/cavity-map.cpp","undoManager":{"mark":2,"position":2,"stack":[[{"start":{"row":0,"column":0},"end":{"row":32,"column":0},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","","int main(){","    int n;","    cin >> n;","    vector<string> grid(n);","    for(int grid_i = 0;grid_i < n;grid_i++){","       cin >> grid[grid_i];","    }","    for(int grid_i = 0; grid_i < n; grid_i++)","        {","        for(int i = 0; i < n; i++)","         {","            if(i != 0 && i != n-1)","            {","            if(grid[grid_i][i-1] < grid[grid_i][i] && grid[grid_i][i+1] < grid[grid_i][i])","                grid[grid_i][i] = 'X';","        }","        }","            ","    }","    for(int grid_i = 0;grid_i < n;grid_i++){","       cout << grid[grid_i] << endl;","    }","    return 0;","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":32,"column":0},"action":"remove","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","","int main(){","    int n;","    cin >> n;","    vector<string> grid(n);","    for(int grid_i = 0;grid_i < n;grid_i++){","       cin >> grid[grid_i];","    }","    for(int grid_i = 0; grid_i < n; grid_i++)","        {","        for(int i = 0; i < n; i++)","         {","            if(i != 0 && i != n-1)","            {","            if(grid[grid_i][i-1] < grid[grid_i][i] && grid[grid_i][i+1] < grid[grid_i][i])","                grid[grid_i][i] = 'X';","        }","        }","            ","    }","    for(int grid_i = 0;grid_i < n;grid_i++){","       cout << grid[grid_i] << endl;","    }","    return 0;","}",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":33,"column":0},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","","int main(){","    int n;","    cin >> n;","    vector<string> grid(n);","    for(int grid_i = 0;grid_i < n;grid_i++){","       cin >> grid[grid_i];","    }","    for(int grid_i = 0; grid_i < n; grid_i++)","        {","        for(int i = 0; i < n; i++)","         {","            if(i != 0 && i != n-1 && grid_i != 0 && grid_i != n-1)","            {","            if(grid[grid_i][i-1] < grid[grid_i][i] && grid[grid_i][i+1] < grid[grid_i][i] && grid[grid_i-1][i] < grid[grid_i][i] && grid[grid_i + 1][i] < grid[grid_i][i])","                grid[grid_i][i] = 'X';","        }","        }","            ","    }","    for(int grid_i = 0;grid_i < n;grid_i++){","       cout << grid[grid_i] << endl;","    }","    return 0;","}","",""],"id":3}]]},"ace":{"folds":[],"scrolltop":40,"scrollleft":0,"selection":{"start":{"row":33,"column":0},"end":{"row":33,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":0,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1462660721907,"hash":"7c8f2863977469898ed74b1b1f08eaada3516ac6"}
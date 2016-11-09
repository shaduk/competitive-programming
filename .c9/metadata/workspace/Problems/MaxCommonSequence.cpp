{"filter":false,"title":"MaxCommonSequence.cpp","tooltip":"/Problems/MaxCommonSequence.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":75,"column":0},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","","int main() {","    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  ","    int sizea,sizeb;","    cin >> sizea >> sizeb;","    int a[101],b[101];","    int opt[101][101]; ","    vector<int> ans;","    a[0] = 0;","    b[0] = 0;","    for(int i = 1; i <= sizea; i++)","        {","        cin >> a[i];","    }","    for(int i = 1; i <= sizeb; i++)","        {","","        cin >> b[i];","    }","    ","    for(int i = 0; i <= sizea; i++)","        {","        opt[0][i] = 0;","    }","    ","    for(int i = 0; i <= sizeb; i++)","        {","        opt[i][0] = 0;","    }","    ","    for(int i = 1; i <= sizea; i++)","        {","        for(int j = 1; j <= sizeb; j++)","            {","            if(a[i] == b[j])","                {","                opt[i][j] = opt[i-1][j-1] + 1;","            }","            else","                {","                opt[i][j] = max(opt[i-1][j], opt[i][j-1]);","            }","        }","    }","    ","    int i = sizea, j = sizeb;","    while(i > 0 && j > 0)","    {","      if(a[i] == b[j])","          {","          ans.push_back(a[i]);","          i--;","          j--;","      }","        else if(opt[i][j-1] >= opt[i-1][j])","            {","            j--;","        }","        else","            i--;","    }       ","    for(int i = ans.size()-1; i >= 0; i--)","            {","            cout << ans[i] << \" \";","        }","        cout << endl;","    return 0;","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":433.5,"scrollleft":0,"selection":{"start":{"row":75,"column":0},"end":{"row":75,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":21,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1478312521393,"hash":"e0e7b320a91963ab79026da784dbe6bf4e0adf25"}
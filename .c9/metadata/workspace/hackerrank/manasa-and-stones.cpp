{"filter":false,"title":"manasa-and-stones.cpp","tooltip":"/hackerrank/manasa-and-stones.cpp","undoManager":{"mark":9,"position":9,"stack":[[{"start":{"row":0,"column":0},"end":{"row":0,"column":55},"action":"insert","lines":["https://www.hackerrank.com/challenges/manasa-and-stones"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":2}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":3}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":4}],[{"start":{"row":0,"column":58},"end":{"row":0,"column":59},"action":"insert","lines":[" "],"id":5}],[{"start":{"row":0,"column":59},"end":{"row":0,"column":60},"action":"insert","lines":["*"],"id":6}],[{"start":{"row":0,"column":60},"end":{"row":0,"column":61},"action":"insert","lines":["/"],"id":7}],[{"start":{"row":0,"column":61},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":8}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":9}],[{"start":{"row":2,"column":0},"end":{"row":40,"column":0},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <stdlib.h> ","#include <time.h>","#include <set>","#include <iostream>","#include <algorithm>","using namespace std;","","","int main() {","    int test;","    cin >> test;","    while(test--)","        {","","        int n, a, b;","        cin >> n >> a >> b;","        auto result = std::minmax({a,b});","        int mini = result.first*(n-1);","        int maxi = result.second*(n-1);","        int diff = result.second - result.first;","        if(a == b){","                cout << mini << endl;","                ","            }","        else {","        for(int i = 0; i < n; i++)","            {","            cout << mini << \" \";","            mini = mini + diff;","        }","       cout << endl;","        }","    }","    return 0;","}",""],"id":10}]]},"ace":{"folds":[],"scrolltop":180,"scrollleft":0,"selection":{"start":{"row":40,"column":0},"end":{"row":40,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":8,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1460480601512,"hash":"53f3908a69f5a14040e178f0f7f3ce4da5ff8971"}
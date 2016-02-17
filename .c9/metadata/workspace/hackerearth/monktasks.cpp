{"filter":false,"title":"monktasks.cpp","tooltip":"/hackerearth/monktasks.cpp","undoManager":{"mark":13,"position":13,"stack":[[{"start":{"row":0,"column":0},"end":{"row":41,"column":0},"action":"insert","lines":["#include <iostream>","#include <bitset>","#include <string>","#include <vector>","using namespace std;","","int main()","{","    int test;","    vector <long long int> hash[64];","    cin >> test;","    while(test--)","    {","    \tint N;","    \tcin >> N;","    \t","    \tfor(int i = 0; i <= 64; i++)","    \t{","    \t\thash[i].clear();","    \t}","    \t","    \tfor(int i = 0; i < N; i++)","    \t{","    \t\tlong long int input;","    \t\tcin >> input;","    \t\tstd::bitset<64> binary = std::bitset<64>(input);","    \t\t","    \t\thash[binary.count()].push_back(input);","    \t}","    ","    \tfor(long long int i = 0; i < 64; i++)","    \t{","    \t\tfor(long long int j = 0; j < hash[i].size(); j++)","    \t\t{","    \t\t\tcout << hash[i][j] << \" \"; ","    \t\t}","    \t}","    \tcout << endl;","    \t","    }","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":3}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":4}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":5}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":74},"action":"insert","lines":["https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-tasks/"],"id":6}],[{"start":{"row":0,"column":74},"end":{"row":0,"column":75},"action":"insert","lines":[" "],"id":7}],[{"start":{"row":0,"column":75},"end":{"row":0,"column":76},"action":"insert","lines":["8"],"id":8}],[{"start":{"row":0,"column":76},"end":{"row":0,"column":77},"action":"insert","lines":["/"],"id":9}],[{"start":{"row":0,"column":76},"end":{"row":0,"column":77},"action":"remove","lines":["/"],"id":10}],[{"start":{"row":0,"column":75},"end":{"row":0,"column":76},"action":"remove","lines":["8"],"id":11}],[{"start":{"row":0,"column":75},"end":{"row":0,"column":76},"action":"insert","lines":["*"],"id":12}],[{"start":{"row":0,"column":76},"end":{"row":0,"column":77},"action":"insert","lines":["/"],"id":13}],[{"start":{"row":0,"column":77},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":14}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":1,"column":0},"end":{"row":1,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1455688978969,"hash":"30ae802ddb0e27464bec3b3f7b3ea3671824fda0"}
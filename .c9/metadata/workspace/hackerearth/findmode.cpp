{"filter":false,"title":"findmode.cpp","tooltip":"/hackerearth/findmode.cpp","undoManager":{"mark":8,"position":8,"stack":[[{"start":{"row":0,"column":0},"end":{"row":39,"column":0},"action":"insert","lines":["#include <iostream>","#include <map>","#include <vector>","#include <stdio.h>","using namespace std;","","int main()","{","    int test;","    scanf(\"%d\", &test);","    while(test--)","    {","    \tint N, freq = 0;","    \tmap<int, int> mymap;","    \tscanf(\"%d\", &N);","    \tfor(int i = 0; i < N; i++)","    \t{","    \t\tint inp;","    \t\tscanf(\"%d\",&inp);","    \t\tif(mymap[inp])","    \t\t\tmymap[inp]++;","    \t\telse","    \t\t\tmymap[inp] = 1;","    \t\tif(mymap[inp] > freq)","    \t\tfreq = mymap[inp];","    \t}","    \t","    \tfor (std::map<int,int>::iterator it=mymap.end(); it!=mymap.begin(); --it)","    \t{","    \t\tif(it->second == freq)","    \t\t{","    \t\t\tprintf(\"%d\", it->first);","    \t\t\tprintf(\" \");","    \t\t}","    \t}","    \tprintf(\"\\n\");","    }","    ","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":3}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":4}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":5}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":60},"action":"insert","lines":["https://www.hackerearth.com/problem/algorithm/find-mode/#"],"id":6}],[{"start":{"row":0,"column":60},"end":{"row":0,"column":61},"action":"insert","lines":[" "],"id":7}],[{"start":{"row":0,"column":61},"end":{"row":0,"column":62},"action":"insert","lines":["*"],"id":8}],[{"start":{"row":0,"column":62},"end":{"row":0,"column":63},"action":"insert","lines":["/"],"id":9}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":15,"column":21},"end":{"row":15,"column":21},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1457355519000,"hash":"b97e29c00f1528e8966a8b1aa0ac90cffb8e8e15"}
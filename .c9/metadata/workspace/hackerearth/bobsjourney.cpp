{"filter":false,"title":"bobsjourney.cpp","tooltip":"/hackerearth/bobsjourney.cpp","undoManager":{"mark":9,"position":9,"stack":[[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":1}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":2}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":3}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":64},"action":"insert","lines":["https://www.hackerearth.com/problem/algorithm/bobs-journey-5/"],"id":4}],[{"start":{"row":0,"column":64},"end":{"row":0,"column":65},"action":"insert","lines":[" "],"id":5}],[{"start":{"row":0,"column":65},"end":{"row":0,"column":66},"action":"insert","lines":["*"],"id":6}],[{"start":{"row":0,"column":66},"end":{"row":0,"column":67},"action":"insert","lines":["/"],"id":7}],[{"start":{"row":0,"column":67},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":8}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":9}],[{"start":{"row":2,"column":0},"end":{"row":36,"column":0},"action":"insert","lines":["#include <iostream>","#include <map>","#include <string>","using namespace std;","","int main()","{","    int test;","    map<char, int> mymap;","    cin >> test;","    while(test--)","    {","    \tint N, flag = 0;","    \tmymap.clear();","    \tcin >> N;","    \tfor(int i = 0; i < N; i++)","    \t{","    \t\tstring city;","    \t\tcin >> city;","    \t\tif(mymap[city[0]])","    \t\t{","    \t\t\tflag = 1;","    \t\t}","    \t\telse","    \t\t{","    \t\t\tmymap[city[0]] = 1;","    \t\t}","    \t}","    \tif(flag == 0)","    \tcout << \"YES\" << endl;","    \telse","    \tcout << \"NO\" << endl;","    }","}",""],"id":11}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":36,"column":0},"end":{"row":36,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1457250456043,"hash":"9bb5f3fca53703e17001fcda20214afdabfe1ea9"}
{"filter":false,"title":"bubblesort.cpp","tooltip":"/hackerearth/bubblesort.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":41,"column":0},"action":"insert","lines":["#include <iostream>","#include <vector>","using namespace std;","","int main()","{","\tint testcases;","    cin >> testcases;","    while(testcases--)","    {","    \tint totalnos;","    \tvector<int> novector; ","    \tcin >> totalnos;","    \tfor(int i = 0; i < totalnos; i ++)","    \t{","    \t\tint no;","    \t\tcin >> no;","    \t\tnovector.push_back(no);","    \t}","    \t","    \tfor(int i = 0; i < totalnos-1; i++)","    \t{","    \t\tfor(int k = 0; k < totalnos-i-1; k++)","    \t\t{","    \t\t\tif(novector[k] < novector[k+1])","    \t\t\t{","    \t\t\t\tint temp = novector[k];","    \t\t\t\tnovector[k] = novector[k+1];","    \t\t\t\tnovector[k+1] = temp;","    \t\t\t}","    \t\t}","    \t}","    \t","    \tfor(int i = 0; i < totalnos; i++)","    \t{","    \t\tcout << novector[i] << \" \";","    \t}","    \tcout << \"\\n\";","    }","    return 0;","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":173,"scrollleft":0,"selection":{"start":{"row":41,"column":0},"end":{"row":41,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":8,"mode":"ace/mode/c_cpp"}},"timestamp":1450385062000,"hash":"7877b165ab6c9121eb32cf4fcccdb080c91a1922"}
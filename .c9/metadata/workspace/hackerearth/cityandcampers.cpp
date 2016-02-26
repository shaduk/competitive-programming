{"filter":false,"title":"cityandcampers.cpp","tooltip":"/hackerearth/cityandcampers.cpp","undoManager":{"mark":1,"position":1,"stack":[[{"start":{"row":0,"column":0},"end":{"row":74,"column":0},"action":"insert","lines":["#include <iostream>","#include <set>","using namespace std;","","","void initialize(int Camp[], int Size[], int N)","{","\tfor(int i = 1; i <= N; i++)","\t{","\t\tCamp[i] = i;","\t}","\t","\tfor(int i = 1; i <= N; i++)","\t{","\t\tSize[i] = 1;","\t}","}","","int root(int Camp[], int i)","{","\twhile(Camp[i] != i)","\t{","\t\ti = Camp[i];","\t}","\treturn i;","}","","void weightedunion(int Camp[], int Size[], int a, int b)","{","\tint roota = root(Camp, a);","\tint rootb = root(Camp, b);","\tif(Size[roota] < Size[rootb])","\t{","\t\tCamp[roota] = Camp[rootb];","\t\tSize[rootb] += Size[roota]; ","\t}","\telse","\t{","\t\tCamp[rootb] = Camp[roota];","\t\tSize[roota] += Size[rootb]; ","\t}","\t","}","","bool find(int Camp[], int a, int b)","{","\treturn root(Camp, a) == root(Camp, b);","}","","int main()","{","    int N, Q;","    cin >> N >> Q;","  ","    int Camp[N+1], Size[N+1];","    initialize(Camp, Size, N);","    for(int i = 0; i < Q; i++)","    {","    \tint a, b;","    \tcin >> a >> b;","    \tif(find(Camp, a, b))","    \t{","    \t\t","    \t}","    \telse","    \t{","    \t\t","    \t\tweightedunion(Camp, Size, a, b);","    \t\t","    \t}","    }","    ","    ","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":74,"column":0},"action":"remove","lines":["#include <iostream>","#include <set>","using namespace std;","","","void initialize(int Camp[], int Size[], int N)","{","\tfor(int i = 1; i <= N; i++)","\t{","\t\tCamp[i] = i;","\t}","\t","\tfor(int i = 1; i <= N; i++)","\t{","\t\tSize[i] = 1;","\t}","}","","int root(int Camp[], int i)","{","\twhile(Camp[i] != i)","\t{","\t\ti = Camp[i];","\t}","\treturn i;","}","","void weightedunion(int Camp[], int Size[], int a, int b)","{","\tint roota = root(Camp, a);","\tint rootb = root(Camp, b);","\tif(Size[roota] < Size[rootb])","\t{","\t\tCamp[roota] = Camp[rootb];","\t\tSize[rootb] += Size[roota]; ","\t}","\telse","\t{","\t\tCamp[rootb] = Camp[roota];","\t\tSize[roota] += Size[rootb]; ","\t}","\t","}","","bool find(int Camp[], int a, int b)","{","\treturn root(Camp, a) == root(Camp, b);","}","","int main()","{","    int N, Q;","    cin >> N >> Q;","  ","    int Camp[N+1], Size[N+1];","    initialize(Camp, Size, N);","    for(int i = 0; i < Q; i++)","    {","    \tint a, b;","    \tcin >> a >> b;","    \tif(find(Camp, a, b))","    \t{","    \t\t","    \t}","    \telse","    \t{","    \t\t","    \t\tweightedunion(Camp, Size, a, b);","    \t\t","    \t}","    }","    ","    ","}",""],"id":2},{"start":{"row":0,"column":0},"end":{"row":79,"column":1},"action":"insert","lines":["#include <iostream>","#include <set>","using namespace std;","","","void initialize(int Camp[], int Size[], int N)","{","\tfor(int i = 1; i <= N; i++)","\t{","\t\tCamp[i] = i;","\t}","\t","\tfor(int i = 1; i <= N; i++)","\t{","\t\tSize[i] = 1;","\t}","}","","int root(int Camp[], int i)","{","\twhile(Camp[i] != i)","\t{","\t\ti = Camp[i];","\t}","\treturn i;","}","","void weightedunion(int Camp[], int Size[], int a, int b)","{","\tint roota = root(Camp, a);","\tint rootb = root(Camp, b);","\tif(Size[roota] < Size[rootb])","\t{","\t\tCamp[roota] = Camp[rootb];","\t\tSize[rootb] += Size[roota];","\t\t","\t}","\telse","\t{","\t\tCamp[rootb] = Camp[roota];","\t\tSize[roota] += Size[rootb]; ","\t}","\t","}","","bool find(int Camp[], int a, int b)","{","\treturn root(Camp, a) == root(Camp, b);","}","","int main()","{","    int N, Q;","    cin >> N >> Q;","    set<int> myset;","    int Camp[N+1], Size[N+1];","    initialize(Camp, Size, N);","    for(int i = 0; i < Q; i++)","    {","    \tint a, b;","    \tcin >> a >> b;","    \tif(find(Camp, a, b))","    \t{","    \t\tcout << *myset.rbegin() - *myset.begin() << \" \";","    \t}","    \telse","    \t{","    \t\tmyset.clear();","    \t\tweightedunion(Camp, Size, a, b);","    \t\tfor(int j = 1; j <= N; j++)","    \t\t{","\t\t\t\tmyset.insert(Size[root(Camp, j)]);","    \t\t}","    \t\t","    \t\tcout << *(myset.rbegin()) - *(myset.begin());","    \t}","    \tcout << endl;","    }","    ","}"]}]]},"ace":{"folds":[],"scrolltop":960,"scrollleft":0,"selection":{"start":{"row":79,"column":1},"end":{"row":79,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":49,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1456305143673,"hash":"28bcf9909ed212b8e7b7d6461f1f555ed4c26ba8"}
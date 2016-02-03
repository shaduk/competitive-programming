{"filter":false,"title":"puchiandluggage.cpp","tooltip":"/hackerearth/puchiandluggage.cpp","undoManager":{"mark":27,"position":27,"stack":[[{"start":{"row":0,"column":0},"end":{"row":81,"column":1},"action":"insert","lines":["#include <iostream>","using namespace std;","","int C[1000006],D[1000006];","","void Merge(int Arr[], int start, int end, int mid)","{","    int i = start, j = mid + 1; ","    int k = 0, count = 0;","    int lengthaux = end - start + 1;","    int Aux[lengthaux];","    ","    while(i <= mid && j <= end)","    {","        if(Arr[i] > Arr[j])","        {","        \tcount++;","            Aux[k++] = Arr[j++];","           ","        }","        else","        {","        \tC[Arr[i]]+=count;","            Aux[k++] = Arr[i++];","        }","    }","    ","    while(i <= mid)","    {","    \tC[Arr[i]]+=count;","        Aux[k++] = Arr[i++];","        ","    }","    ","    while(j <= end)","    {","        Aux[k++] = Arr[j++];","    }","    ","    for(int l = 0; l < lengthaux; l++)","    {","        Arr[start] = Aux[l];","        start++;","    }","    ","}","","void MergeSort(int Arr[], int start, int end)","{","   if(start < end){","    int mid = (start + end) / 2;","    MergeSort(Arr, start, mid);","    MergeSort(Arr, mid+1, end);","    Merge(Arr, start, end, mid);","   }","}","","int main()","{","\tint test;","\tcin >> test;","\twhile(test--)","\t{","\t\t","\t\tint noinputs;","\t\tcin >> noinputs;","\t\tint array[noinputs] ;","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tint inp;","\t\t\tcin >> inp;","\t\t\tarray[i] = inp;","\t\t\tD[i] = array[i];","\t\t}","\t\tMergeSort(array, 0, noinputs-1);","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tcout<<C[D[i]]<<\" \";","\t\t}","\t    cout<<\"\\n\";","\t}","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":4}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":5}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":6}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":77},"action":"insert","lines":["https://www.hackerearth.com/code-monk-sorting/algorithm/puchi-and-luggage/"],"id":7}],[{"start":{"row":0,"column":77},"end":{"row":0,"column":78},"action":"insert","lines":[" "],"id":8}],[{"start":{"row":0,"column":78},"end":{"row":0,"column":79},"action":"insert","lines":["*"],"id":9}],[{"start":{"row":0,"column":79},"end":{"row":0,"column":80},"action":"insert","lines":["/"],"id":10}],[{"start":{"row":2,"column":0},"end":{"row":83,"column":1},"action":"remove","lines":["#include <iostream>","using namespace std;","","int C[1000006],D[1000006];","","void Merge(int Arr[], int start, int end, int mid)","{","    int i = start, j = mid + 1; ","    int k = 0, count = 0;","    int lengthaux = end - start + 1;","    int Aux[lengthaux];","    ","    while(i <= mid && j <= end)","    {","        if(Arr[i] > Arr[j])","        {","        \tcount++;","            Aux[k++] = Arr[j++];","           ","        }","        else","        {","        \tC[Arr[i]]+=count;","            Aux[k++] = Arr[i++];","        }","    }","    ","    while(i <= mid)","    {","    \tC[Arr[i]]+=count;","        Aux[k++] = Arr[i++];","        ","    }","    ","    while(j <= end)","    {","        Aux[k++] = Arr[j++];","    }","    ","    for(int l = 0; l < lengthaux; l++)","    {","        Arr[start] = Aux[l];","        start++;","    }","    ","}","","void MergeSort(int Arr[], int start, int end)","{","   if(start < end){","    int mid = (start + end) / 2;","    MergeSort(Arr, start, mid);","    MergeSort(Arr, mid+1, end);","    Merge(Arr, start, end, mid);","   }","}","","int main()","{","\tint test;","\tcin >> test;","\twhile(test--)","\t{","\t\t","\t\tint noinputs;","\t\tcin >> noinputs;","\t\tint array[noinputs] ;","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tint inp;","\t\t\tcin >> inp;","\t\t\tarray[i] = inp;","\t\t\tD[i] = array[i];","\t\t}","\t\tMergeSort(array, 0, noinputs-1);","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tcout<<C[D[i]]<<\" \";","\t\t}","\t    cout<<\"\\n\";","\t}","}"],"id":11}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"remove","lines":["",""],"id":12}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":13}],[{"start":{"row":2,"column":0},"end":{"row":85,"column":1},"action":"insert","lines":["#include <iostream>","#include<bits/stdc++.h>","using namespace std;","#define mem(A,val) memset(A,val,sizeof(A))","int C[1000006],D[1000006];","","void Merge(int Arr[], int start, int end, int mid)","{","    int i = start, j = mid + 1; ","    int k = 0, count = 0;","    int lengthaux = end - start + 1;","    int Aux[lengthaux];","    ","    while(i <= mid && j <= end)","    {","        if(Arr[i] > Arr[j])","        {","        \tcount++;","            Aux[k++] = Arr[j++];","           ","        }","        else","        {","        \tC[Arr[i]]+=count;","            Aux[k++] = Arr[i++];","        }","    }","    ","    while(i <= mid)","    {","    \tC[Arr[i]]+=count;","        Aux[k++] = Arr[i++];","        ","    }","    ","    while(j <= end)","    {","        Aux[k++] = Arr[j++];","    }","    ","    for(int l = 0; l < lengthaux; l++)","    {","        Arr[start] = Aux[l];","        start++;","    }","    ","}","","void MergeSort(int Arr[], int start, int end)","{","   if(start < end){","    int mid = (start + end) / 2;","    MergeSort(Arr, start, mid);","    MergeSort(Arr, mid+1, end);","    Merge(Arr, start, end, mid);","   }","}","","int main()","{","\tint test;","\tcin >> test;","\twhile(test--)","\t{","\t\t","\t\tint noinputs;","\t\tcin >> noinputs;","\t\tint array[noinputs] ;","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tint inp;","\t\t\tcin >> inp;","\t\t\tarray[i] = inp;","\t\t\tD[i] = array[i];","\t\t}","\t\tmem(C,0);","\t\tMergeSort(array, 0, noinputs-1);","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tcout<<C[D[i]]<<\" \";","\t\t}","\t    cout<<\"\\n\";","\t}","}"],"id":14}],[{"start":{"row":67,"column":1},"end":{"row":67,"column":2},"action":"remove","lines":["\t"],"id":15}],[{"start":{"row":67,"column":0},"end":{"row":67,"column":1},"action":"remove","lines":["\t"],"id":16}],[{"start":{"row":66,"column":2},"end":{"row":67,"column":0},"action":"remove","lines":["",""],"id":17}],[{"start":{"row":22,"column":4},"end":{"row":22,"column":8},"action":"remove","lines":["    "],"id":18}],[{"start":{"row":22,"column":0},"end":{"row":22,"column":4},"action":"remove","lines":["    "],"id":19}],[{"start":{"row":21,"column":11},"end":{"row":22,"column":0},"action":"remove","lines":["",""],"id":20}],[{"start":{"row":21,"column":10},"end":{"row":21,"column":11},"action":"remove","lines":[" "],"id":21}],[{"start":{"row":21,"column":9},"end":{"row":21,"column":10},"action":"remove","lines":[" "],"id":22}],[{"start":{"row":21,"column":8},"end":{"row":21,"column":9},"action":"remove","lines":[" "],"id":23}],[{"start":{"row":21,"column":9},"end":{"row":22,"column":0},"action":"insert","lines":["",""],"id":24},{"start":{"row":22,"column":0},"end":{"row":22,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":22,"column":4},"end":{"row":22,"column":8},"action":"remove","lines":["    "],"id":25}],[{"start":{"row":22,"column":0},"end":{"row":22,"column":4},"action":"remove","lines":["    "],"id":26}],[{"start":{"row":21,"column":9},"end":{"row":22,"column":0},"action":"remove","lines":["",""],"id":27}],[{"start":{"row":21,"column":9},"end":{"row":22,"column":0},"action":"insert","lines":["",""],"id":28},{"start":{"row":22,"column":0},"end":{"row":22,"column":8},"action":"insert","lines":["        "]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":16,"column":5},"end":{"row":16,"column":5},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1453578052163,"hash":"f9961b90c73244fb7ff0ba592f6b6cc6e67f39d4"}
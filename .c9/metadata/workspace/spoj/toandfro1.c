{"filter":false,"title":"toandfro1.c","tooltip":"/spoj/toandfro1.c","undoManager":{"mark":4,"position":4,"stack":[[{"start":{"row":0,"column":0},"end":{"row":35,"column":1},"action":"insert","lines":["#include<stdio.h>","#include<string.h>","int main()","{","    int t;","    scanf(\"%d\",&t);","    while(t)","    {","        char arr[300];","        scanf(\"%s\",arr);","        int len=strlen(arr)/t;","        char ans[len][t];","        int i,j,k=0;","        for(i=0;i<len;i++)","        {","            if(i%2)","            {","                for(j=t-1;j>=0;j--)","                   ans[i][j]=arr[k++];","            }","            else{","            for(j=0;j<t;j++)","            {","                ans[i][j]=arr[k++];","            }}","        }","        for(i=0;i<t;i++)","        {","            for(j=0;j<len;j++)","                printf(\"%c\",ans[j][i]);","        }","        printf(\"\\n\");","        scanf(\"%d\",&t);","    }","    return 0;","}"],"id":1}],[{"start":{"row":24,"column":12},"end":{"row":24,"column":13},"action":"remove","lines":["}"],"id":2}],[{"start":{"row":24,"column":13},"end":{"row":25,"column":0},"action":"insert","lines":["",""],"id":3},{"start":{"row":25,"column":0},"end":{"row":25,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":25,"column":12},"end":{"row":25,"column":13},"action":"insert","lines":["}"],"id":4}],[{"start":{"row":20,"column":16},"end":{"row":21,"column":0},"action":"insert","lines":["",""],"id":5},{"start":{"row":21,"column":0},"end":{"row":21,"column":12},"action":"insert","lines":["            "]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":2,"column":10},"end":{"row":2,"column":10},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1438356007000,"hash":"43e9c315f5660b254213e898d9e804ee0330d361"}
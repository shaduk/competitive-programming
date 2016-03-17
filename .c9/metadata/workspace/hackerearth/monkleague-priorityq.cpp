{"filter":false,"title":"monkleague-priorityq.cpp","tooltip":"/hackerearth/monkleague-priorityq.cpp","undoManager":{"mark":9,"position":9,"stack":[[{"start":{"row":0,"column":0},"end":{"row":25,"column":0},"action":"insert","lines":["#include <iostream>","#include <queue>","using namespace std;","","int main()","{","   \tint M, N, ans = 0;","   \tcin >> M >> N;","   \tpriority_queue<int> mypq;","   \t","   \tfor(int i = 0; i < M; i++)","   \t{","   \t\tint input;","   \t\tcin >> input;","   \t\tmypq.push(input);","   \t}","   \tfor(int i = 0; i < N; i++)","   \t{","   \t\tans = ans + mypq.top();","   \t\tint temp = mypq.top();","   \t\tmypq.pop();","   \t\tmypq.push(temp-1);","   \t}","   \tcout << ans << endl;","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":4}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":5}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":6}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":104},"action":"insert","lines":["https://www.hackerearth.com/code-monk-heaps-and-priority-queues/algorithm/monk-and-champions-league/#"],"id":7}],[{"start":{"row":0,"column":104},"end":{"row":0,"column":105},"action":"insert","lines":[" "],"id":8}],[{"start":{"row":0,"column":105},"end":{"row":0,"column":106},"action":"insert","lines":["*"],"id":9}],[{"start":{"row":0,"column":106},"end":{"row":0,"column":107},"action":"insert","lines":["/"],"id":10}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":3,"selection":{"start":{"row":0,"column":107},"end":{"row":0,"column":107},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1458124074104,"hash":"d85fae7fd41f69cf461ebf155c29c9a97d5a131d"}
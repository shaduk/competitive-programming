{"filter":false,"title":"biasedchandan.cpp","tooltip":"/hackerearth/biasedchandan.cpp","ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":27,"column":0},"end":{"row":27,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"hash":"b0c5e0878aadcca0767cc1c877b9cb55e744d044","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":27,"column":0},"action":"insert","lines":["#include <iostream>","#include <stack>","using namespace std;","","int main()","{","   int n, sum = 0;","   stack<int> mystack;","   cin >> n;","   ","   for(int i = 0; i < n; i++)","   {","   \t\tint k;","   \t\tcin >> k;","   \t\tif(k != 0)","   \t\tmystack.push(k);","   \t\telse","   \t\tmystack.pop();","   }","   while(!mystack.empty())","   {","   \t\tsum = sum + mystack.top();","   \t\tmystack.pop();","   }","   cout << sum << endl;","   ","}",""],"id":1}]]},"timestamp":1456947945000}
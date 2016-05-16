{"filter":false,"title":"acm-icpc.cpp","tooltip":"/hackerrank/acm-icpc.cpp","undoManager":{"mark":12,"position":12,"stack":[[{"start":{"row":0,"column":0},"end":{"row":16,"column":1},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","int main(){","    int n;","    int m;","    cin >> n >> m;","    vector<string> topic(n);","    for(int topic_i = 0;topic_i < n;topic_i++){","       cin >> topic[topic_i];","    }","    return 0;","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":16,"column":1},"action":"remove","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","int main(){","    int n;","    int m;","    cin >> n >> m;","    vector<string> topic(n);","    for(int topic_i = 0;topic_i < n;topic_i++){","       cin >> topic[topic_i];","    }","    return 0;","}"],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":40,"column":0},"action":"insert","lines":["#include <cmath>","#include <bitset>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","int main(){","    int n;","    int m;","    int topics = 0, team = 0;","    cin >> n >> m;","    vector<string> topic(n);","    vector<std::bitset<512>> ans;","    for(int topic_i = 0;topic_i < n;topic_i++){","       cin >> topic[topic_i];","    }","    ","    for(int topic_i = 0;topic_i < n;topic_i++){","       std::bitset<512> a (std::string(topic[topic_i]));","       for(int j = topic_i+1; j < n; j++)","           {","           std::bitset<512> b (std::string(topic[j]));","           std::bitset<512> c = a|b;","           ans.push_back(c);","           if(c.count() > topics)","               topics = c.count();","       }","    }","    for(int i = 0; i < ans.size(); i++)","        {","        if(ans[i].count() == topics)","            team++;","    }","    cout << topics << endl;","    cout << team << endl;","    ","    return 0;","}",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":4}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":5}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":6}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":7}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":54},"action":"insert","lines":["https://www.hackerrank.com/challenges/acm-icpc-team"],"id":8}],[{"start":{"row":0,"column":54},"end":{"row":0,"column":55},"action":"insert","lines":[" "],"id":9}],[{"start":{"row":0,"column":55},"end":{"row":0,"column":56},"action":"insert","lines":["*"],"id":10}],[{"start":{"row":0,"column":56},"end":{"row":0,"column":57},"action":"insert","lines":["/"],"id":11}],[{"start":{"row":0,"column":57},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":12}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":13}]]},"ace":{"folds":[],"scrolltop":180,"scrollleft":0,"selection":{"start":{"row":2,"column":0},"end":{"row":2,"column":0},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":8,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1463319633844,"hash":"a72033e2f640d403f7f4468695e93ac68ea64b71"}
{"filter":false,"title":"greedy1.cpp","tooltip":"/hackerearth/greedy1.cpp","undoManager":{"mark":3,"position":3,"stack":[[{"start":{"row":0,"column":0},"end":{"row":47,"column":0},"action":"insert","lines":["#include <iostream>","#include <queue>","#include <string>","using namespace std;","","int main()","{","   int test;","   cin >> test;","   while(test--)","   {","   \t\tstring str1, str2, ans;","   \t\tqueue<char> q1, q2;","   \t\tcin >> str1 >> str2;","   \t\tfor ( std::string::iterator it=str1.begin(); it!=str1.end(); ++it)","   \t\t{","   \t\t\tq1.push(*it);","   \t\t}","   \t\tfor ( std::string::iterator it=str2.begin(); it!=str2.end(); ++it)","   \t\t{","   \t\t\tq2.push(*it);","   \t\t}","   \t\twhile(!q1.empty())","   \t\t{","   \t\t\tif(!q2.empty())","   \t\t\t{","   \t\t\t\tif(q2.front() < q1.front())","   \t\t\t\t{","   \t\t\t\t\tans.push_back(q2.front());","   \t\t\t\t\tq2.pop();","   \t\t\t\t\tq1.pop();","   \t\t\t\t}","   \t\t\t\telse","   \t\t\t\t{","   \t\t\t\t\tq2.pop();","   \t\t\t\t}","   \t\t\t}","   \t\t\telse","   \t\t\t{","   \t\t\t\tans.push_back(q1.front());","   \t\t\t\tq1.pop();","   \t\t\t}","   \t\t}","   \t\tcout << ans << endl;","   \t\t","   }","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":47,"column":0},"action":"remove","lines":["#include <iostream>","#include <queue>","#include <string>","using namespace std;","","int main()","{","   int test;","   cin >> test;","   while(test--)","   {","   \t\tstring str1, str2, ans;","   \t\tqueue<char> q1, q2;","   \t\tcin >> str1 >> str2;","   \t\tfor ( std::string::iterator it=str1.begin(); it!=str1.end(); ++it)","   \t\t{","   \t\t\tq1.push(*it);","   \t\t}","   \t\tfor ( std::string::iterator it=str2.begin(); it!=str2.end(); ++it)","   \t\t{","   \t\t\tq2.push(*it);","   \t\t}","   \t\twhile(!q1.empty())","   \t\t{","   \t\t\tif(!q2.empty())","   \t\t\t{","   \t\t\t\tif(q2.front() < q1.front())","   \t\t\t\t{","   \t\t\t\t\tans.push_back(q2.front());","   \t\t\t\t\tq2.pop();","   \t\t\t\t\tq1.pop();","   \t\t\t\t}","   \t\t\t\telse","   \t\t\t\t{","   \t\t\t\t\tq2.pop();","   \t\t\t\t}","   \t\t\t}","   \t\t\telse","   \t\t\t{","   \t\t\t\tans.push_back(q1.front());","   \t\t\t\tq1.pop();","   \t\t\t}","   \t\t}","   \t\tcout << ans << endl;","   \t\t","   }","}",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":21,"column":0},"action":"insert","lines":["#include <iostream>","#include <queue>","#include <string>","#include <algorithm>","using namespace std;","","int main()","{","   int test;","   cin >> test;","   while(test--)","   {","   \t\tstring str1, str2, ans;","   \t\tcin >> str1 >> str2;","   \t\tsort(str2.begin(), str2.end());","   \t\tfor(int i = 0; i < str1.size(); i++)","   \t\t{","   \t\t\t","   \t\t}","   }","}",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":21,"column":0},"action":"remove","lines":["#include <iostream>","#include <queue>","#include <string>","#include <algorithm>","using namespace std;","","int main()","{","   int test;","   cin >> test;","   while(test--)","   {","   \t\tstring str1, str2, ans;","   \t\tcin >> str1 >> str2;","   \t\tsort(str2.begin(), str2.end());","   \t\tfor(int i = 0; i < str1.size(); i++)","   \t\t{","   \t\t\t","   \t\t}","   }","}",""],"id":4},{"start":{"row":0,"column":0},"end":{"row":30,"column":0},"action":"insert","lines":["#include <iostream>","#include <queue>","#include <string>","#include <algorithm>","using namespace std;","","int main()","{","   int test;","   cin >> test;","   while(test--)","   {","   \t\tstring str1, str2, ans= \"\";","   \t\tcin >> str1 >> str2;","   \t\tsort(str2.begin(), str2.end());","   \t\tfor(int i = 0; i < str1.size(); i++)","   \t\t{","   \t\t\tif(str2.size() >= 1 && str2[0] < str1[i])","   \t\t\t{","   \t\t\t\tans = ans + str2[0];","   \t\t\t\tstr2 = str2.substr(1);","   \t\t\t}","   \t\t\telse","   \t\t\t{","   \t\t\t\tans = ans + str1[i];","   \t\t\t}","   \t\t}","   \t\tcout << ans << endl;","   }","}",""]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":30,"column":0},"end":{"row":30,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1459429168936,"hash":"69d2559a2fd9cb8541293e9ae8d912883eba5254"}
{"filter":false,"title":"monkpoly.cpp","tooltip":"/hackerearth/monkpoly.cpp","undoManager":{"mark":1,"position":1,"stack":[[{"start":{"row":0,"column":0},"end":{"row":40,"column":1},"action":"insert","lines":["#include <iostream>","#include <cmath>","","using namespace std;","","int main()","{","\tint test;","    cin >> test;","\twhile(test--)","\t{","\t\tint a, b, c, k, mid = 0;","\t\tcin >> a >> b >> c >> k;","\t\tint left = 0;","\t\tint right = 1000000000;","\t\twhile(left <= right)","\t\t{","\t\t\tmid = left + (right - left) / 2;","\t\t\t","\t\t\tif(a*pow(mid,2) + b*mid + c >= k && a*pow(mid-1,2) + b*(mid-1) + c < k)","\t\t\t{","\t\t\t\tcout << mid << endl;","\t\t\t\tbreak;","\t\t\t}","\t\t\t","\t","\t\t\telse if(a*pow(mid,2) + b*mid + c < k)","\t\t\t{","\t\t\t","\t\t\t\tleft = mid + 1;","\t\t\t}","\t\t\t","\t\t\telse if(a*pow(mid,2) + b*mid + c > k)","\t\t\t{","\t\t\t\tcout << \"test\" << test << endl;","\t\t\t\tright = mid - 1;","\t\t\t}","\t\t}","\t}","\treturn 0;","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":40,"column":1},"action":"remove","lines":["#include <iostream>","#include <cmath>","","using namespace std;","","int main()","{","\tint test;","    cin >> test;","\twhile(test--)","\t{","\t\tint a, b, c, k, mid = 0;","\t\tcin >> a >> b >> c >> k;","\t\tint left = 0;","\t\tint right = 1000000000;","\t\twhile(left <= right)","\t\t{","\t\t\tmid = left + (right - left) / 2;","\t\t\t","\t\t\tif(a*pow(mid,2) + b*mid + c >= k && a*pow(mid-1,2) + b*(mid-1) + c < k)","\t\t\t{","\t\t\t\tcout << mid << endl;","\t\t\t\tbreak;","\t\t\t}","\t\t\t","\t","\t\t\telse if(a*pow(mid,2) + b*mid + c < k)","\t\t\t{","\t\t\t","\t\t\t\tleft = mid + 1;","\t\t\t}","\t\t\t","\t\t\telse if(a*pow(mid,2) + b*mid + c > k)","\t\t\t{","\t\t\t\tcout << \"test\" << test << endl;","\t\t\t\tright = mid - 1;","\t\t\t}","\t\t}","\t}","\treturn 0;","}"],"id":2},{"start":{"row":0,"column":0},"end":{"row":45,"column":1},"action":"insert","lines":["#include <iostream>","#include <cmath>","","using namespace std;","","int main()","{","\tint test;","    cin >> test;","\twhile(test--)","\t{","\t\tint a, b, c, k, mid = 0;","\t\tcin >> a >> b >> c >> k;","\t\tint left = 0;","\t\tint right = 1000000000;","\t\twhile(left <= right)","\t\t{","\t\t\tmid = left + (right - left) / 2;","\t\t\t","\t\t\tif(c > k)","\t\t\t{","\t\t\t\tcout << left << endl;","\t\t\t\tbreak;","\t\t\t}","\t\t\tif(a*pow(mid,2) + b*mid + c >= k && a*pow(mid-1,2) + b*(mid-1) + c < k)","\t\t\t{","\t\t\t\tcout << mid << endl;","\t\t\t\tbreak;","\t\t\t}","\t\t\t","\t","\t\t\telse if(a*pow(mid,2) + b*mid + c < k)","\t\t\t{","\t\t\t","\t\t\t\tleft = mid + 1;","\t\t\t}","\t\t\t","\t\t\telse if(a*pow(mid,2) + b*mid + c > k)","\t\t\t{","\t\t\t","\t\t\t\tright = mid - 1;","\t\t\t}","\t\t}","\t}","\treturn 0;","}"]}]]},"ace":{"folds":[],"scrolltop":239,"scrollleft":0,"selection":{"start":{"row":45,"column":1},"end":{"row":45,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":11,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1453756917768,"hash":"c7efc4e98363f562c4176ff4dcf7ee953432e028"}
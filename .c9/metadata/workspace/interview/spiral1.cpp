{"filter":false,"title":"spiral1.cpp","tooltip":"/interview/spiral1.cpp","undoManager":{"mark":14,"position":14,"stack":[[{"start":{"row":0,"column":0},"end":{"row":39,"column":1},"action":"insert","lines":["vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {","\tvector<int> result;","\tint m = A[0].size();// DO STUFF HERE AND POPULATE result","\tint n = A.size();","\tint T = 0, B = n-1, L = 0, R = m - 1,dir = 0;","\twhile(T<=B && L<=R)","\t{","\t    if(dir == 0)","\t    {","\t        for(int i = L;i <= R;i++)","\t        result.push_back(A[T][i]);","\t        T++;","\t    }","\t    else if(dir == 1)","\t    {","\t        for(int i=T; i <= B;i++)","\t        result.push_back(A[i][R]);","\t        R--;","\t    }","\t    else if(dir == 2)","\t    {","\t        for(int i = R; i >= L; i--)","\t        result.push_back(A[B][i]);","\t        B--;","\t    }","\t    else if(dir == 3)","\t    {","\t        for(int i = B; i >= T; i--)","\t        result.push_back(A[i][L]);","\t        L++;","\t    }","\t    dir = (dir +1)%4;","\t    ","\t}","\treturn result;","    // Do not write main() function.","    // Do not read input, instead use the arguments to the function.","    // Do not print the output, instead return values as specified","    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":4}],[{"start":{"row":0,"column":0},"end":{"row":13,"column":27},"action":"insert","lines":["Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.","","Example:","","Given the following matrix:","","[","    [ 1, 2, 3 ],","    [ 4, 5, 6 ],","    [ 7, 8, 9 ]","]","You should return","","[1, 2, 3, 6, 9, 8, 7, 4, 5]"],"id":5}],[{"start":{"row":13,"column":27},"end":{"row":14,"column":0},"action":"insert","lines":["",""],"id":6}],[{"start":{"row":14,"column":0},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":7}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":1},"action":"insert","lines":["*"],"id":8}],[{"start":{"row":15,"column":1},"end":{"row":15,"column":2},"action":"insert","lines":["*"],"id":9}],[{"start":{"row":15,"column":2},"end":{"row":15,"column":3},"action":"insert","lines":["/"],"id":10}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":11}],[{"start":{"row":1,"column":0},"end":{"row":1,"column":1},"action":"insert","lines":["/"],"id":12}],[{"start":{"row":1,"column":1},"end":{"row":1,"column":2},"action":"insert","lines":["*"],"id":13}],[{"start":{"row":1,"column":2},"end":{"row":1,"column":3},"action":"insert","lines":["*"],"id":14}],[{"start":{"row":1,"column":3},"end":{"row":1,"column":4},"action":"insert","lines":[" "],"id":15}]]},"ace":{"folds":[],"scrolltop":412.5,"scrollleft":0,"selection":{"start":{"row":15,"column":0},"end":{"row":15,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1445316118904,"hash":"e90f5f41488997ce284b3ae54d57a9b259c457cb"}
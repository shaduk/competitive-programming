{"filter":false,"title":"FizzBuzz.java","tooltip":"/Leetcode/FizzBuzz.java","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":16,"column":1},"action":"insert","lines":["public class Solution {","    public List<String> fizzBuzz(int n) {","        List<String> ans = new ArrayList<>();","        for(int i = 1; i <= n; i++)","        {","            String temp = \"\";","            if(i%3 == 0)","                temp = temp + \"Fizz\";","            if(i%5 == 0)","                temp = temp + \"Buzz\";","            if(i%3 != 0 && i%5 != 0)","                temp = Integer.toString(i);","            ans.add(temp);","        }","        return ans;","    }","}"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":16,"column":1},"end":{"row":16,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":5,"state":"start","mode":"ace/mode/java"}},"timestamp":1482110123680,"hash":"cd2b26d110247cbcfc245c516fbbb9bbfcbdd55e"}
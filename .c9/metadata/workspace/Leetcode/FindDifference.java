{"filter":false,"title":"FindDifference.java","tooltip":"/Leetcode/FindDifference.java","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":13,"column":1},"action":"insert","lines":["public class Solution {","    public char findTheDifference(String s, String t) {","        int ans = 0;","        for(int i = 0; i < s.length(); i++)","        {","            ans = ans^s.charAt(i);","        }","        for(int i = 0; i < t.length(); i++)","        {","            ans = ans^t.charAt(i);","        }","        return (char)ans;","    }","}"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":13,"column":1},"end":{"row":13,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":5,"state":"start","mode":"ace/mode/java"}},"timestamp":1482209898315,"hash":"e72c2c48531f12a07e91c6ab3644b34b72418cb1"}
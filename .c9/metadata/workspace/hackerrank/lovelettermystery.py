{"filter":false,"title":"lovelettermystery.py","tooltip":"/hackerrank/lovelettermystery.py","ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":24,"column":1},"end":{"row":24,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"hash":"8f789a8f2273a82a6189efe498559ea91a732c98","undoManager":{"mark":5,"position":5,"stack":[[{"group":"doc","deltas":[{"start":{"row":0,"column":0},"end":{"row":0,"column":61},"action":"insert","lines":["https://www.hackerrank.com/challenges/the-love-letter-mystery"]}]}],[{"group":"doc","deltas":[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["#"]}]}],[{"group":"doc","deltas":[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":[" "]}]}],[{"group":"doc","deltas":[{"start":{"row":0,"column":63},"end":{"row":1,"column":0},"action":"insert","lines":["",""]}]}],[{"group":"doc","deltas":[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""]}]}],[{"group":"doc","deltas":[{"start":{"row":2,"column":0},"end":{"row":24,"column":1},"action":"insert","lines":["# Enter your code here. Read input from STDIN. Print output to STDOUT","n = int(raw_input())","li = []","for i in range(n):","    j = raw_input()","    li.append(j)","","for i in li:","    total = 0","    n = len(i)-1","    for j in range(0,n/2+1):","        if i[j]==i[n-j]:","            ","            total = total","        elif i[j]>i[n-j]:","          ","            total=total+(ord(i[j])-ord(i[n-j]))","        else:","           ","            total=total+(ord(i[n-j])-ord(i[j])) ","            ","    print total"," "]}]}]]},"timestamp":1428925692000}
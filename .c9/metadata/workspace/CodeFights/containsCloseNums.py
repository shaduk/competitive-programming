{"filter":false,"title":"containsCloseNums.py","tooltip":"/CodeFights/containsCloseNums.py","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":8,"column":0},"action":"insert","lines":["def containsCloseNums(nums, k):","    d = {}","    for i in range(0, len(nums)):","        if nums[i] in d and abs(d[nums[i]]-i) <= k:","            return True","        else:","            d[nums[i]] = i","    return False",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":8,"column":0},"end":{"row":8,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1499898285089,"hash":"f5f42bc35519786382933571327c5e3252205c3b"}
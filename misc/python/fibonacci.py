from itertools import permutations
from collections import Counter
import time
print(time.time())
s=["dgajkhdjkjfkl","ahfjkh","jfskoj","hfakljfio","fjfjir","jiosj","jiojf","jriosj","jiorjf","jhhhhaskgasjdfljjriof"]	
t=10
while t>0:
	S=s[10-t]
	c=dict(Counter(S))
	Cperm=list(permutations(c.values()))
	flag= False
	for i in Cperm:
		for j in range(2,len(i)):
			if i[j]==i[j-1]+i[j-2]:
				print("Dynamic")
				flag= True
				break
		
		if flag==True:
			break
	else:
		print("Not")
		
	t=t-1			
	
print(time.time())	
	

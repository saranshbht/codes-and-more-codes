t = int(input())
    for _ in range(t) :
		    flag = True
		           l = list(map(int, input().split()))
		               for i in range(len(l) - 5) :
               if l[i] == 1 and l[i + 1] == 1 and l[i + 2] == 1 and l[i + 3] == 1 and l[i + 4] == 1 and l[i + 5] == 1:
				               print("#coderlifematters")
				               flag = False
				                      break
                      if flag:
				                      print("#allcodersarefun")
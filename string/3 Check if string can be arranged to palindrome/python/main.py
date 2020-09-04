def canFormPalindrome(strr): 
	
	listt = [] 
	
	for i in range(len(strr)): 
		if (strr[i] in listt): 
			listt.remove(strr[i]) 
		else: 
			listt.append(strr[i]) 

	if (len(strr)% 2 == 0 and len(listt) == 0 or (len(strr) % 2 == 1 and len(listt) == 1)): 
		return True
	else: 
		return False

if (canFormPalindrome("asa")): 
	print("Yes") 
else: 
	print("No") 
	
if (canFormPalindrome("asd")): 
	print("Yes") 
else: 
	print("No") 


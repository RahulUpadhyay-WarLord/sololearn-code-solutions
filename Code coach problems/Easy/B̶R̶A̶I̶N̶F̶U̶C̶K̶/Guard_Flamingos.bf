[Copyright Djivs, 2020]
,>,<[->+<]>.






Explanation:







						
						
### Idea:
We have two input numbers 
a and b
and we need to print sumof a and b

###Start position:

(p is a pointer)

0 0
p

###Finish position:
a r
  p
  
Where r is a and b sum




### Code:
,	#Read a
>	#Move to slot 2
,	#Read b
<	#Go back to slot 1
[	#While a is not zero
-	#Substract 1 from a
>	#Go to slot 2
+	#Add 1 to b
<	#Go back to slot a to end the cycle if a is zero
]	#End cycle
	#As a result we will have a and b sum in slot 2
>	#Go to slot 2
.	#Print result

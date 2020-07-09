,+[->+++++++++<]>.

Explanation:


Idea:

We have to add 1 to input number and then multiply it by 9

Start:

(p is a pointer)

0 0
p



Finish:

0 r
  p
  
Where r is a result



,		#Read number from input (lets name it a)
+		#Add 1 to a
[->+++++++++<]	#Multiply a by 9

>.		#Result is in slot 2
		#so we will move to slot 2 and print its value

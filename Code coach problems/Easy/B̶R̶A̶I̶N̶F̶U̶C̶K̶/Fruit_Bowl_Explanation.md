`This` task is pretty simple



**You just need to divide given number by 2**
**and then divide it by 3**



**We can use any cell size**

So there is no problem with input and output



**You can visit my brain-fuck-library repository:(https://github.com/Djivs/brain-fuck-library)**

**Open Basics folder and see divide function to understand how it works**







### Program:

###### First two lines is just divide by 2 from divide function(basics folder):

`+>>>,`


`[-[->+>]<<]<[>>]>>`


###### Then you can see modified divide by 2 function (divide by 3)

It is all just previous function but with one line changed

`[`

	`-`
	
	`[`
	
		`-`
		
		`[->+>] 		#This line changed`
		
	`]`
	
	`<<`
	
`]`

###### And then we will move to the result slot
If a%3==0 we will be near the result slot(p is a pointer):

0 res

p

and if a%3!=0 we will be 3 slots away from res:


0 0 0 res

p



So first we anyways want to move left:

`>`

Then if we was near the result we have to move 2 times left

`[<<]`


and then it don't matter where we are

we just go right 2 times

`>>`

and print the result

.

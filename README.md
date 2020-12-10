# STMicroelectronics-
Name: Shubham Aggarwal
Email: shubham.garg911@gmail.com

Ques. min time for n person to cross the river with different crossing time.

Approach:
There can be 2 cases for this solution:
1.	we take highest & lowest to go to another side of the river & returns with lowest person.  it’s not optimal in some cases. Reason is when highest goes with lowest on another side, time required is of highest. Then, Lowest returns. Now, when second highest goes with lowest, time required is of second highest. So, time is highest + second highest.
when, highest goes with second highest, second highest time is covered by highest time & that’s why, time is only highest time. But if we return with second highest, it will be very loss of time. 
2.	We take the two least time to go on the boat and return the person with less time. Then another batch will go on the boat and it will return the least person on the right side of the river. In this way, when all the right batch is over we will be getting the min time.

Arr is the time reqd by person 
N is the size of the array
Left[], Right[] is the visited array of left, right batch.
Case1,case2 is the time in case 1 and 2 resp.
Finish1,finish2 is the number of person on left and right.
Finish will got till the number of person in array
Time is the min of both the cases.




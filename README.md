CS 2401 – Fall 2025  
# Lab 1 - Operator Overloading  
Due: 11:59 PM Friday, September 5th  
***  
This assignment is to be completed on your own. Refer to the plagiarism policy in the syllabus.
***  
Download the MyTime.h and MyTime.cc files provided with this assignment. In this example, you will see implementations for four arithmetic operators, three Boolean operators and the input and output operators. They have all been implemented as friends of the MyTime class. To test your code, run "make run_tests" in the terminal.  

**IMPORTANT NOTE:** If you run make run-tests after freshly cloning the repo, the test cases will pass. This happens because the operators are correctly implemented as friends. You still need to change the operators to members to get full credit for this assignment.

Requirements: 

* Add proper Doxygen documentation to MyTime.h.  

* Implement all 9 operators without using friends. 
    * The the boolean and arithmetic operators must be changed to members of the MyTime class. Make sure you use const correctly to protect both object from being changed (-½ point each time you miss a const). 
    * For the I/O operators, start by adding input and output functions in the class that do the job of the operator. Then, have the operator call your member function on the object being passed in. The prototypes for the input and output functions are included in the MyTime class.  

* Combine the two constructors into a single constructor by using default arguments.  

* Write an application that allows the user to enter two times and an integer. Using these, demonstrate all the math operators and at least one of the boolean operators.  
    * Clearly prompt the user for the desired input.  
    * Clearly output the results of the operators (it should be obvious which operation each output is demonstrating).  
 
Your final commit message should be along the lines of **"Finished, ready to grade. run-tests"**.  

**Your final GitHub repository should include:** Your updated MyTime.h and MyTime.cc and your main.cc. All code should be adequately documented and neatly formatted according to the guidelines given in the coding standard resources provided on Canvas. Submit a link to your repository on Canvas when you are finished with the assignment.

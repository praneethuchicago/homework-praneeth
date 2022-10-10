// preprocessor directives go here
#include "preprocessor.txt"
// end preprocessor directives

void test()
{
  printf("Hello World");
}

// findings:
// 1. I tried including the preprocessor files using the syntax <FILE_NAME> (e.g. #include <preprocessor.txt> which resulted in errors. I added the pp directives directly in the subst.c file to test and the intended output was the result. Then I changed my approach and include the pp txt file with quotes instead of brackets and got the intended output.
// 2. Another finding is with the use of conditional statements in preprocessing. I had a bit of trouble doing two things specifically. The first was getting the ifdef method to recognize Hello within the print statement; for this, I tried defining a token for Hello and replacing it with Hi for which the condition did not seem to run as intended. I thought maybe the pp2 file that I was writing code in (and mentioned within pp1.txt using #include) was not executing properly but that was not the issue. The include directive is working fine. The problem is related to defining tokens properly and tbh, I need some help understanding this better. I was able to successfully replace printf with a puts command but it executed when in the else statement, not the if condition.  

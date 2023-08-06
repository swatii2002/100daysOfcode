class Solution {
public:
    int countOperations(int num1, int num2) 
 {
     return fun(num1,num2);       
 }
 int fun(int num1,int num2)
 {
 	if(num1==0 or num2==0)
 	{
 		return 0;
	 }
	 if(num1>=num2)
	 {
	 	 return 1+fun(num1-num2,num2);
	 }
	 else 
	 {
	 	return 1+fun(num1,num2-num1);
	 }
 }
};

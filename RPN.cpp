/*
Name: Vishwanath Kamble
Project: RPN Calculate
CS 570 Final project
Date completed: 05/09/2015
*/
//basic header files
#include <iostream>
#include<cstdlib> //standard libraries	
#include <cmath> //common mathematical operations and transformations
#include <string> //for string operations
#include <sstream> //for string stream
#include <stack> //for using stacks
#include <fstream> //for file operations

using namespace std; //for cout cin endl string
//class symbol starts
class symbol
{
public:
	bool isOperator(const string& input) //check if string is one of the operators. If yes, return true
	{
		string sym[] = { "+", "-", "/", "*", "pow", "%" };
		for (int i = 0; i < 6; i++)
		{
			if (input == sym[i]) //iterate through sym[] to find operator
				return true; //if found
		}
		return false;
	} //bool ends
};//class symbol ends

class operand : public symbol
{
private: double num1;
		 stack <double> calcstack; //stack to store numbers
public:
	void pushNum(double x) //push into stack	
	{
		num1 = x; //assign x to num1 and push num1
		calcstack.push(num1);
	}
	bool stackEmpty() //return true of stack is empty
	{
		if (calcstack.empty())
			return true;
		else
			return false;
	}
	void remove() //pop elements
	{
		calcstack.pop();
	}
	double returnTop() //return top element
	{
		return calcstack.top();
	}
	int returnSize() //return size of elements
	{
		return calcstack.size();
	}

}; //classs operand ends

class operatr : public symbol
{
private:
	string op;
public:
	double performAdd(double num1, double num2)
	{
		if (op == "+")
		{
			double ans = (num1 + num2);
			return ans;
		}
	}
	double performSub(double num1, double num2)
	{
		if (op == "-")
		{
			double ans = (num1 - num2);
			return ans;
		}
	}
	double performMul(double num1, double num2)
	{
		if (op == "*")
		{
			double ans = (num1 * num2);
			return ans;
		}
	}
	double performDiv(double num1, double num2)
	{
		if (op == "/")
		{
			double ans = (num1 / num2);
			return ans;
		}
	}
	double performMod(double num1, double num2)
	{
		if (op == "%")
		{
			double ans = fmod(num1,num2);
			return ans;
		}
	}
	double performPow(double num1, double num2)
	{
		if (op == "pow")
		{
			double ans = pow(num1,num2);
			return ans;
		}
	}
};

class add : public operatr
{
private:
	string sym = "+";
public:
	string getSymbol()
	{
		return sym;
	}
	double performAdd(double num1, double num2)
	{
		//	cout << "Performing " << num1 << " + " << num2 << endl;
		double ans = num1 + num2;
		//	cout << "Addition is " << ans << endl;
		return ans;
	}
};

class subtract : public operatr
{
private:
	string sym = "-";
public:
	string getSymbol()
	{
		return sym;
	}
	double performSub(double num1, double num2)
	{
		//	cout << "Performing " << num1 << " - " << num2 << endl;
		double ans = num1 - num2;
		//	cout << "Subtraction is " << ans << endl;
		return ans;
	}
};

class multiply : public operatr
{
private:
	string sym = "*";
public:
	string getSymbol()
	{
		return sym;
	}
	double performMul(double num1, double num2)
	{
	//	cout << "Performing " << num1 << " * " << num2 << endl;
		double ans = num1 * num2;
	//	cout << "Multiplication is " << ans << endl;
		return ans;
	}

};

class divide : public operatr
{
private:
	string sym = "/";
public:
	string getSymbol()
	{
		return sym;
	}
	double performDiv(double num1, double num2)
	{
		if (num2 == 0) //logical error
			throw overflow_error("Logical Error. Division by 0!");
		double ans;
		//cout << "Performing " << num1 << " / " << num2 << endl;
		ans = num1 / num2;
//		cout << "Division is " << ans << endl;
		return ans;
	}
};

class power : public operatr
{
private:
	string sym = "pow";
public:
	string getSymbol()
	{
		return sym;
	}
	double performPow(double num1, double num2)
	{
		//cout << "Performing " << num1 << " pow " << num2 << endl;
		double ans = pow(num1, num2);
		//cout << "Power is " << ans << endl;
		return ans;
	}
};

class mod : public operatr
{
private:
	string sym = "%";
public:
	string getSymbol()
	{
		return sym;
	}
	double performMod(double num1, double num2)
	{
	//	cout << "Performing " << num1 << " % " << num2 << endl;
		double ans = fmod(num1, num2);
	//	cout << "Mod is: " << ans << endl;
		return ans;
	}
};

int main()
{
	string input, filename; //string to store line and filename of the file
	operand obj; //object1 
	char ans = 'n';// if user enters wrong file name, ask him to enter corret file again
	symbol a; //object 2
	do
	{
		ans = 'n'; //make answer  = no to break the while loop
		cout << "Enter name of file: "; //ask for filename
		cin >> filename; //store filename
		ifstream infile(filename); //perform reading
		if (infile.is_open())// if file opens
		{
		while (!infile.eof()) //perform until end of file arrives
		{
			getline(infile, input); //store line in input
			{
				int i, j, len = input.length(), isDecimal = 0;
				double v1, v = 0;
				for (i = 0; i < len; i++)
				{
					//v1 = 0;
					char s;
					s = input.at(i); //store current char of line in s
					if (s != ' ') //if s is not a space or is number/operator/./invalid input
					{
						if (len == 1) //if the line has only one element
						{
							cout << input.at(0) << endl;
							break;
						}
						if (isdigit(s)) //if char is digit starts
						{
							v = s + 0 - 48; //convert char to int
							if (i < len)
								j = i + 1;
							if (j < len && input.at(j) == ' ') //if single digit number like 8,9
							{
								obj.pushNum(v);
							}
							else if (j < len && input.at(j) != ' ') //if next char is digit/.dot/operator
							{
								char t = input.at(j); //save next digit
								while (t != ' ' && isdigit(t) || t == '.') //more than 1 digit with or without decimals
								{
									isDecimal = 0;
									while (isdigit(t)) //if next number is digit
									{
										if (isDecimal == 0) //if decimal hasn't occured yet
										{
											v1 = t + 0 - 48; //convert to double
											v = v * 10 + v1; //add to existing number
											v1 = 0;
											++i; ++j; //since we handled j, increment it
											t = input.at(j); //check next char of the present
										}
									}
									if (t == '.') //if next char is .
									{
										++i; //since we handled . increment decimal point
										t = input.at(j + 1); //store next character after decimal
										while (t != ' ' && isdigit(t)) //while character is number
										{
											char temp1;
											double dec;
											switch (isDecimal)
											{
											case 0:
												temp1 = input.at(j + 1); //store the char
												dec = temp1 + 0 - 48; //convert it to int
												v = v + (dec * 0.1); //multiply by 0.1 because 1st decimal point
												isDecimal++; //increment to show decimal arrived
												i++; j += 2; //increment by 2 (since we handled . and next number
												t = input.at(j);//check next char
												break;
											case 1:
												temp1 = input.at(j); //store the char
												dec = temp1 + 0 - 48; //convert it to int
												v = v + (dec * 0.01); //multiply by 0.01 because 2nd decimal point
												isDecimal++; //increment to show number after decimal
												++i; j++; //increment to move and point to next number
												t = input.at(j); //store next number in t
												break;
											case 2:
												temp1 = input.at(j); //store the char
												dec = temp1 + 0 - 48; //convert it to int
												v = v + (dec * 0.001); //multiply by 0.001 because 3rd decimal point
												isDecimal++; //increment to show number after decimal
												++i; j++; //increment to move and point to next number
												t = input.at(j); //store next number in t
												break;
											case 3:
												temp1 = input.at(j); //store the char
												dec = temp1 + 0 - 48; //convert it to int
												v = v + (dec * 0.0001); //multiply by 0.001 because 4th decimal point
												isDecimal++; //increment to show number after decimal
												++i; j++; //increment to move and point to next number
												t = input.at(j); //store next number in t
												break;
											case 4:
												temp1 = input.at(j); //store the char
												dec = temp1 + 0 - 48; //convert it to int
												v = v + (dec * 0.00001); //multiply by 0.001 because 4th decimal point
												isDecimal++; //increment to show number after decimal
												++i; j++; //increment to move and point to next number
												t = input.at(j); //store next number in t
												break;
											}

										}//while ends if next char is either space or not number
									}
									else
									{
										break; //else break
									}
								}
								obj.pushNum(v);//push the final double to stack
							}
						}
						//if char is digit ends

						//if char is operator starts
						else if (s != ' ')
						{ //if operator
							stringstream ss;
							string char2string;
							if (s == 'p' && input.at(i + 1) == 'o' && input.at(i + 2) == 'w') //if char is power
							{
								char2string = "pow"; //store as pow
								i += 2;
							}
							else if (s == '+' || s == '-' || s == '/' || s == '*' || s == '%') //if it is one of the operators
							{
								//convert to string
								ss << s;
								ss >> char2string;
							}
								//check if it is valid operator
							if (a.isOperator(char2string))
							{//if yes
									double x = 0, y = 0, ans = 0; //variable declaration
									//creating class objects
									add ad;
									subtract sb;
									multiply mul;
									divide div;
									power po;
									mod mo;
									if (!obj.stackEmpty()) //if stack has some values
									{
										int stsize = obj.returnSize(); //store current size of stack
										if (stsize > 1) //if there are 2 or more elements in stack
										{
											y = obj.returnTop(); //store top element (last element)
											obj.remove(); //pop top element
											x = obj.returnTop(); //store current top element (second last)
											obj.remove(); //pop that element
											if (char2string == ad.getSymbol()) //check if string is +
											{//if yes, perform addition by passing the two numbers
												ans = ad.performAdd(x, y);
												obj.pushNum(ans); //push the ans into stack
											}
											else if (char2string == sb.getSymbol()) // check if string is -
											{//if yes, perform subtraction by passing the two numbers
												ans = sb.performSub(x, y);
												obj.pushNum(ans); //push ans into stack
											}
											else if (char2string == div.getSymbol())// check if string is /
											{//if yes, perform division by passing the two numbers										if (y == 0)
												try //perform division only when second number != 0
												{
													ans = div.performDiv(x, y);
													obj.pushNum(ans); //push ans into stack
												}
												catch (overflow_error e) //if 2nd number is 0
												{
													cout << e.what() << " SYNTAX ERROR" << endl; //show exception
													while (!obj.stackEmpty()) //empty the stack
														obj.remove();
												}

											}
											else if (char2string == mul.getSymbol()) // check if string is *
											{//if yes, perform multiplication by passing the two numbers		
												ans = mul.performMul(x, y);
												obj.pushNum(ans); //push ans to stack
											}
											else if (char2string == po.getSymbol()) // check if string is pow
											{//if yes, perform power by passing the two numbers		
												ans = po.performPow(x, y);
												obj.pushNum(ans); //push ans to stack
											}
											else if (char2string == mo.getSymbol()) // check if string is -
											{//if yes, perform modulus by passing the two numbers		
												ans = mo.performMod(x, y);
												obj.pushNum(ans); //push ans to stack
											}
										}//if stack >1
										else
										{ //if stack has only 1 element and operator arrives!
											//cout << "Stack has only one element so cannot perform operations" << endl;
											cout << "SYNTAX ERROR " << endl;
											while (!obj.stackEmpty()) //empty stack
												obj.remove();
											//goto start; //read new line
											break;
										}
										//add else for stack having one element

									} //perform if stack is not empty
								}//if s is an operator ends
							
							else
							{ //if char is not a digit or operator or space but like (banana) or a3 
								cout << "SYNTAX ERROR" << endl;
								while (!obj.stackEmpty()) //empty the stack
									obj.remove();
								//goto start;//read next line
								break;
							}
						}
					}
				} //for loop ends when ' ' arrives
				if (!obj.stackEmpty()) //for loop ends means the line has ended. stack size will hold the result
				{
					//cout << "Final result of line: " << input << " is: " << obj.returnTop() << endl;
					cout << obj.returnTop();// ouput the top to show result
					obj.remove(); //pop the only element remaining
					cout << endl;//
				}
			}// getline ends

		}//WHILE END OF FILE LOOP
		}
		else //if file doesn't open, show error
		{
			cout << "Error. File not found! Enter the correct file name and try again!" << endl;
			cout << "Do you want to try again?\nEnter Y or y for Yes or any other key to exit! ";
			cin >> ans;
			cout <<endl<<endl;
		}
	}while (ans == 'y' || ans == 'Y');
	cout << "Exiting! " << endl;
	system("pause"); //pause the screen to see output
	return 0; //return 0 to show program exited successfully
}
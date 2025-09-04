/*

	@Author: Zane Lyvers
	@Date: 09/04/25
	@File: MyTime.h
	@Description: Prototypes for class MyTime

*/
#ifndef MYTIME_H
#define MYTIME_H
#include <iostream>
    
class MyTime
{   
	public:

		///Constructor that uses 0 as default arguments

		MyTime(int h = 0, int m = 0);   

		/// Member functions
		void Reset(int h, int m); ///setter for hour and minute

		void input(std::istream& ins); ///reads input time           

		void output(std::ostream& outs); ///outputs time

		int get_hours() const{return hours;} ///getter for hours

		int get_minutes() const{return minutes;} ///getter for minutes

		/// Operator functions
		MyTime operator + (const MyTime& t2) const; ///time addition
	
		MyTime operator - (const MyTime& t2) const; ///time subtraction
	
		MyTime operator * (int num) const; ///multiplies time by number

		MyTime operator / (int num) const; ///divides time by number

		bool operator == (const MyTime& t2) const; ///boolean compare time equivalent

		bool operator < (const MyTime& t2) const; ///boolean compare time less than

		bool operator <= (const MyTime& t2) const; ///boolean compare time less than or equal to
   
  	private:
		void simplify();
		int hours;        // hours can be > 24
		int minutes;      // 0 <= minutes <= 59
 };

 #endif

std::ostream& operator <<(std::ostream& outs, const MyTime& t); ///overrides << operator to output time

std::istream& operator >>(std::istream& ins, MyTime& t); ///overrides >> operator to read time input

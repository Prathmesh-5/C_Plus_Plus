/*
1. Input/Output (I/O) -----
Header: <iostream>, <iomanip>, <fstream>

cin, cout	                    Standard input and output
cerr, clog	                    Error and log output
getline()	                    Read full line of input
setprecision(), setw()       	Format output
ifstream, ofstream, fstream	    File I/O streams



2. Math Functions -----
Header: <cmath>

sqrt(x)	                 Square root
pow(x, y)	             x raised to power y
abs(x) / fabs(x)	     Absolute value
ceil(x), floor(x)	     Round up/down
sin(x), cos(x), tan(x)	 Trigonometric functions
log(x), log10(x)	     Natural/log10 
min() , max()            Minimum and Maximum finding


3. String Handling
Header: <string> (C++), <cstring> (C)

length(), size()	            Length of string
substr(), find()	            Extract or find substring
append(), insert()	            Add to string
strcmp(), strcpy(), strlen()	C-string comparisons & copy

 4. Algorithms and Utilities
Header: <algorithm>, <utility>

sort(), reverse()	                      Sorting, reversing
max(), min()	                          Get max/min
swap()                                    Swap two variables
count(), find()	                          Count/find element in container
next_permutation(), prev_permutation()	  Permutations


5. Containers
Header: <vector>, <array>, <deque>, <list>, <set>, <map>, <unordered_map>

vector, array, deque, list	            Sequence containers
set, multiset, unordered_set	        Unique value containers
map, multimap, unordered_map	        Key-value pairs



 6. Iterators and Functional
Header: <iterator>, <functional>

begin(), end()	                 Get iterator positions
advance(), distance()	         Work with iterators
function<>	                     Function wrapper
bind(), mem_fn()	             Function binding


7. Time & Date
Header: <ctime>

time(), difftime()	        Current time, time difference
localtime(), gmtime()	    Convert time
clock()               	    Processor time


8. Random Number Generation
Header: <cstdlib>, <random>

rand(), srand()	                                   Basic random
<random>: mt19937, uniform_int_distribution	       Modern RNG

*/
#include<iostream>
#include<cmath>
using namespace std;
int  main(){

    cout<<"square root of 9 is : "<<sqrt(9)<<endl;
    cout<<"4 ki power 3 = "<<pow(4,3)<<endl;
    cout<<"max among 5,7 is : "<<max(5,7)<<endl;
    cout<<"absolute value of -9 is : "<<abs(-9)<<endl;


    return 0;
}
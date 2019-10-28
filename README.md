# Materials for the course Introduction to Programming 2019

The course is going through the basics of programming with C++

## Course Scope
* **Input/ Output** - basic *standard library* tools to control your data flow

```c++
    #include <iostream>
    using namespace std;

    void main()
    {
        int g; // Initialize g
        cin >> g; // Input Value to g 
        cout << "Output is: "<< g; // Output g Value
    }
```

* **Types** - basic *variables* type to handle different data sets

```c++
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
```

* **Arithmetic Operations** - is a mathematical operation that takes two *variables* and performs a calculation on them

```c++
    int a = 6;
    
    a += 6; // it is the same as a = a + 6; #returns a = 12
    a -= 6; // it is the same as a = a - 6; #returns a = 6
    
    ++a; // it is the same as a = a + 1; #returns a = 7
    --a; // it is the same as a = a - 1; #returns a = 6
    
    a++; // it is the same as return a and then increment a by 1 code: a; a = a + 1; #returns a = 6 and after return a = a + 1;
    a--; // it is the same as return a and then decrement a by 1 code: a; a = a - 1; #returns a = 7 and after return a = a - 1;
```

* **Logical Operations** - is a decision based on multiple conditions. Part of the conditions are logical operators. The logical operators help us to create logical conditions that lead us to some events.
* * *Logical Connections* 
* * * ```&& #returns 'and'```
* * * ```|| #returns 'or'```
* * * ```<var_1> == <var_2>```
* * * * #returns true if var_1 *is equal* to var_2
* * * * #returns false if var_1 *is not equal* to var_2
* * * ```<var_1> != <var_2>```
* * * * #returns true if var_1 *is not equal* to var_2 
* * * * #returns false if var_1 *is equal* to var_2
* * * ```<var_1> <= <var_2>```
* * * * #returns true if var_1 *is smaller or equal* to var_2
* * * * #returns false if var_1 *is bigger* then var_2
* * * ```<var_1> >= <var_2>```
* * * * #returns true if var_1 *is bigger or equal* to var_2
* * * * #returns false if var_1 *is smaller* then var_2
* * * ```<var_1> > <var_2>```
* * * * #returns true if var_1 *bigger* then var_2
* * * * #returns false if var_1 *is smaller or equal* to var_2
* * * ```<var_1> < <var_2>```
* * * * #returns true if var_1 *smaller* then var_2
* * * * #returns false if var_1 *is bigger or equal* to var_2
* * * ```<var_1> <condition> <var_2> ? <value_if_true> : <value_if_false>```

```c++
    if ( (<condition_1> == true) || (<condition_2> != false)) std::cout << "I am in\n";
    if ( (<condition_1> == true) && (<condition_2> == false)) std::cout << "I am in\n";
    if ( (<condition_1> == true) && (<condition_2> == false)) std::cout << "I am in\n";

    int a, b = 6, c = 8;
    a = b > c ? 10 : 15; // a = 15
```

* **Condition Operators** - *if*, *else*, *switch* are reserved words in C++ which help us to create events based on the logical operation

```c++
    // simple if-statement with an else clause
    int i = 2;
    
    if (i > 2) 
    {
        std::cout << i << " is greater than 2\n";
    } 
    else 
    {
        std::cout << i << " is not greater than 2\n";
    }
 
    // nested if-statement
    int j = 1;
    
    if (i > 1)
    {
        if (j > 2)
        {
            std::cout << i << " > 1 and " << j << " > 2\n";
        }
        else // this else is part of if (j > 2), not of if (i > 1)
        {
            std::cout << i << " > 1 and " << j << " <= 2\n";
        }
    }

    int i = 2;
    
    switch (i) {
        case 1: std::cout << "1";
        case 2: std::cout << "2";   //execution starts at this case label
        case 3: std::cout << "3";
        case 4:
        case 5: std::cout << "45";
                break;              //execution of subsequent statements is terminated
        case 6: std::cout << "6";
    }
 
    std::cout << '\n';
 
    switch (i) {
        case 4: std::cout << "a";
        default: std::cout << "d"; //there are no applicable constant_expressions 
                                   //therefore default is executed
    }
 
    std::cout << '\n';
 
    switch (i) {
        case 4: std::cout << "a";  //nothing is executed
    }
 
    // when enumerations are used in a switch statement, many compilers
    // issue warnings if one of the enumerators is not handled
    enum color {RED, GREEN, BLUE};
    switch(RED) {
        case RED:   std::cout << "red\n"; break;
        case GREEN: std::cout << "green\n"; break;
        case BLUE:  std::cout << "blue\n"; break;
    }
 
    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    switch (Device dev = get_device(); dev.state())
    {
       case SLEEP: /*...*/ break;
       case READY: /*...*/ break;
       case BAD: /*...*/ break;
    }
 
    // pathological examples
 
    // the statement doesn't have to be a compound statement
    switch(0)
        std::cout << "this does nothing\n";
 
    // labels don't require a compound statement either
    switch(int n = 1)
        case 0:
        case 1: std::cout << n << '\n';
```

* **Functions** - are used to perform certain actions, and they are important for *reusing code*: Define the code once, and use it many times.

```c++
    // Function declaration
    void myFunction();

    // The main method
    int main() {
      myFunction();  // call the function
      return 0;
    }

    // Function definition
    void myFunction() {
      cout << "I just got executed!";
    }
```

```c++
    // function name: "isOdd"
    // parameter list has one parameter, with name "n" and type int
    // the return type is bool
    
    bool isOdd(int n)
    {                      // the body of the function begins
        return n % 2;
    }                      // the body of the function ends
    
    // When a function is invoked, e.g. in a function-call expression, the parameters are initialized from the arguments (either provided    at the place of call or defaulted) and the statements in the function body are executed.

    int main()
    {
        for ( int i = 0; i < 10; i++ )
        {
          std::cout << isOdd(i) << ' '; // isOdd called 10 times, each
                                  // time n is copy-initialized from i
        }
        
        return 0;
    }
```

* **Arrays** - is a *collection of data* that holds fixed number of values *of same type*

```c++
    int mark[5] = {19, 10, 8, 17, 9}
    // change 4th element to 9
    mark[3] = 9;
    // take input from the user and insert in third element
    cin >> mark[2];
    // take input from the user and insert in (i+1)th element
    cin >> mark[i];
    // print first element of the array
    cout << mark[0];
    // print ith element of the array
    cout >> mark[i-1];
```

![basic_array_representation](https://cdn.programiz.com/sites/tutorial2program/files/c-array-initialization.jpg)

```c++
    #include <iostream>
    using namespace std;
    int main() 
    {
        int numbers[5], sum = 0;
        cout << "Enter 5 numbers: ";

        //  Storing 5 number entered by user in an array
        //  Finding the sum of numbers entered
        for (int i = 0; i < 5; ++i) 
        {
            cin >> numbers[i];
            sum += numbers[i];
        }

        cout << "Sum = " << sum << endl;  

        return 0;
    }
    
    // Output
    // Enter 5 numbers: 3
    // 4
    // 5
    // 4
    // 2
    // Sum = 18
```

* **Loop Statement** - allows us to *execute a statement* or group of statements *multiple times*
* * ```for```

```c++
    #include <iostream>
    #include <vector>

    int main()
    {
        // typical loop with a single statement as the body
        for (int i = 0; i < 10; ++i)
            std::cout << i << ' ';
        std::cout << '\n';

        // init-statement can declare multiple names, as long as they
        // can use the same decl-specifier-seq
        for (int i = 0, *p = &i; i < 9; i += 2) {
            std::cout << i << ':' << *p << ' ';
        }
        std::cout << '\n';

        // condition may be a declaration
        char cstr[] = "Hello";
        for (int n = 0; char c = cstr[n]; ++n)
            std::cout << c;
        std::cout << '\n';

        // init-statement can use the auto type specifier
        std::vector<int> v = {3, 1, 4, 1, 5, 9};
        for (auto iter = v.begin(); iter != v.end(); ++iter) {
            std::cout << *iter << ' ';
        }
        std::cout << '\n';

        // Basic C++ foreach
        for (auto value : v) {
            std::cout << value << ' ';
        }
        std::cout << '\n';

       // init-statement can be an expression
        int n = 0;
        for (std::cout << "Loop start\n";
             std::cout << "Loop test\n";
             std::cout << "Iteration " << ++n << '\n')
            if(n > 1)
                break;
        std::cout << '\n';
    }
```

* * ```while```

```c++
        #include <iostream>

        int main() {
            // while loop with a single statement
            int i = 0;
            while (i < 10)
                 i++;
            std::cout << i << '\n';

            // while loop with a compound statement
            int j = 2;
            while (j < 9) {
                std::cout << j << ' ';
                j += 2;
            }
            std::cout << '\n';

           // while loop with a declaration condition
           char cstr[] = "Hello";
           int k = 0;
           while (char c = cstr[k++])
               std::cout << c;
           std::cout << '\n';
        }
```

* * ```do while```

![do_while_flow_diagram](https://www.tutorialspoint.com/cplusplus/images/cpp_do_while_loop.jpg)

```c++
        #include <iostream>
        using namespace std;

        int main () {
           // Local variable declaration:
           int a = 10;

           // do loop execution
           do {
              cout << "value of a: " << a << endl;
              a = a + 1;
           } while( a < 20 );

           return 0;
        }
```
```
        Output:
        value of a: 10
        value of a: 11
        value of a: 12
        value of a: 13
        value of a: 14
        value of a: 15
        value of a: 16
        value of a: 17
        value of a: 18
        value of a: 19
```

* **Reference** - *coming soon*
* **Pointer** - *coming soon*
* **Struct** - *coming soon*

## Project Structure
    .
    ├── ...
    ├── docs                    # Documentation files (alternatively `doc`)
    │   ├── TOC.md              # Table of contents
    │   ├── faq.md              # Frequently asked questions
    │   ├── misc.md             # Miscellaneous information
    │   ├── usage.md            # Getting started guide
    │   └── ...                 # etc.
    └── ...
    
## License
UNLICENSED

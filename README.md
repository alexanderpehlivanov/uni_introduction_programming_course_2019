# Materials for the course Introduction to Programming 2019

The course is going through the basics of programming with C++

## Course Scope
* **Input/ Output** - basic *standard library* tools to control your data flow
* **Types** - basic *variables* type to handle different data sets
* **Arithmetic Operations** - is a mathematical operation that takes two *variables* and performs a calculation on them
* **Logical Operations** - is a decision based on multiple conditions. Part of the conditions are logical operators. The logical operators help us to create logical conditions that lead us to some events.
* * *Logical Connections* 
* * * ```&& #returns 'and'```
* * * ```|| #returns 'or'```
* * * ```<var_1> == <var_2> #returns true if var_1 *is equal* to var_2 #returns false if var_1 *is not equal* to var_2```
* * * ```<var_1> != <var_2> #returns true if var_1 *is not equal* to var_2 #returns false if var_1 *is equal* to var_2```
* * * ```<var_1> <= <var_2> #returns true if var_1 *is smaller or equal* to var_2 #returns false if var_1 *is bigger* then var_2```
* * * ```<var_1> >= <var_2> #returns true if var_1 *is bigger or equal* to var_2 #returns false if var_1 *is smaller* then var_2```
* * * ```<var_1> > <var_2> #returns true if var_1 *bigger* then var_2 #returns false if var_1 *is smaller or equal* to var_2```
* * * ```<var_1> < <var_2> #returns true if var_1 *smaller* then var_2 #returns false if var_1 *is bigger or equal* to var_2```
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

* **Types** - basic *variables* type to handle different data sets
* Hat tip to anyone whose code was used
* Inspiration
* etc

Use the package manager [pip](https://pip.pypa.io/en/stable/) to install foobar.

```bash
pip install foobar
```

## Usage

```python
import foobar

foobar.pluralize('word') # returns 'words'
foobar.pluralize('goose') # returns 'geese'
foobar.singularize('phenomena') # returns 'phenomenon'
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)

# Description
A simple C++ API to translate normal string numbers into [Scientific Notation](https://www.wikipedia.org/wiki/Scientific_notation) type.

It's in order to provide an example for the C++ beginners,and for those who haven't wrote a Git Repository as a documentional example.

# Usage

Clone the entire repository,and simplely include the **Scientific_Notation.h** & **Scientifc_Notation.cpp** files into your projects/source files.

Use `SN_NUMBER foo(str)` to declare a scientific number class,use `foo.SN_Producer()` to produce a
scientific notation digits string.

## Example
```cpp
std::string NumStr = "1024.96";
SN_NUMBER MyNum1(NumStr), MyNum2("123456");
std::cout << "MyNum1:" << MyNum1 << std::endl;
std::cout << "MyNum2:" << MyNum2 <<"Number of digits: "<< MyNum2.NDIGIT() << std::endl;
SN_NUMBER MyNum3("12a3445");
```

*The Outputs would be:*
 <pre>
MyNum1:1.02496E3
MyNum2:1.23456E5 Number of digits:6
Error info: Some of the inputs is not digit.
</pre>



# Document
Class' inside functions declared are listed by:
```cpp
SN_NUMBER(std:: string SN_NUMSTR, NTYPE type)
```
Construct a SN_NUMBER class using string,differs the explaination type.

The default type is SN_NUMBER::NTYPE_EXP,which looks like:
```js
1.345789E3
```

For example:
```cpp
SN_NUMBER("3145.92657");
SN_NUMBER(str,SN_NUMBER::NTYPE_TENS);
SN_NUMBER("3145.92657",SN_NUMBER::NTYPE_EXP);
```
  



```cpp
DOTP()
```

Rturns an interger that shows the dot's position in the former number
```cpp
NDIGIT()
```

Returns an interger that shows the length of number.

```cpp
DIGIT()
```
Returns an interger that shows the digits of former number's interger part.
# Support
Get easy to create issues if you find a bug,pull requests are welcomed.

But,seriously,even this is a repository is for beginners,**C++ basics are stupid questions,please turns to C++ guidebooks.**

# License
Thoght this's a *very simple* functions,I still tend to choose the [MIT License](./LICENSE),just for giving everyone the freedom while using & changing my code.


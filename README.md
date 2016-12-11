# Description
A simple C++ API to translate normal string numbers into [Scientific Notation](https://www.wikipedia.org/wiki/Scientific_notation) type.

It's in order to provide an example for the C++ beginners,and for those who haven't wrote a Git Repository as a documentional example.

# Usage

Clone the entire repository,and simplely include the **Scientific_Notation.h** & **Scientifc_Notation.cpp** files into your projects/source files.

Use`SN_NUMBER foo(str)` to declare a scientific number class,use`foo.SN_Producer()` to produce a
scientific notation digits string.

## Example
<pre>
std::string NumStr= "1024.96";
SN_NUMBER MyNumber(NumStr);
std::cout << MyNumber.SN_Producer() << std::endl;
</pre>
 The Outputs would be:
 `1.02496E3`

# Support
Get easy to create issues if you find a bug,pull requests are welcomed.

But,seriously,even this is a repository is for beginners,**C++ basics are stupid questions,please turns to C++ guidebooks.**

# License
Thoght this's a *very simple* functions,I still tend to choose the [MIT License](./LICENSE),just for giving everyone the freedom while using & changing my code.


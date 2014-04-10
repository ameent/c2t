# Background

With tools such as [Emscripten](https://github.com/kripken/emscripten/wiki), it is possible to compile LLVM languages to JavaScript. The C family of languages are strongly typed languages which are compiled into loosely typed JavaScript. [Typescript](http://www.typescriptlang.org/), a superset of JavaScript, is strongly typed and lends itself very well to the situation. Typescript requires type declarations similar to header files in C++ when one is working with existing JavaScript files. 

Writing d.ts files manually can be very cumbersome and error prone. C2T is a tool that converts C++ header definitions into TypeScript type declarations. This makes it very convenient to convert an existing C++ library to JavaScript with Emscripten and then via this tool easily consume it in TypeScript.

# Prerequisites

I've created this library on Ubuntu 13.10 so the instructions I'm providing are based on Ubuntu, but you should be able to find the equivalent for your platform easily.

## Python

The script that creates the type declarations in written in Python.  
<pre>
apt-get install python
</pre>

## CppHeaderParser

I'm utilizing the [CppHeaderParser](https://pypi.python.org/pypi/CppHeaderParser/) Python package to perform the parsing of the header files. To install it, you can use the Python package manager.

<pre>
apt-get install python-pip
pip install ply
pip install CppHeaderParser
</pre>

# Usage

To execute the tool, simply run the script with the Python interpreter. You'll be asked to enter all necessary parameters. To prepare for the tool, I recommend you put all your header files in the same folder and run the C++ preprocessor on it. This tool does not execute code macros for you, so ideally you feed it the output of your C++ project, right after preprocessing is done on the source files. Most compilers have an <code>-E</code> option that outputs the code after pre-processing.

<pre>
python c2t.py
</pre>

# Bindings

The script generates TypeScript classes matching that of the input headers provided. By default, only public methods, public member fields and constructors and operators are translated. If you wish to expose more, you can easily edit the script to do so. I've followed Emscripten's syntax where possible, but if your C++ to JavaScript translator uses a different syntax for its bindings, you should alter the script to match the syntax of your transcompiler.

## Class Fields

Public class members are translated with <code>get_</code> and <code>set_</code> methods.

C++

<pre>
class btDispatcherInfo { 
    public: 
        float m_timeStep;
}
</pre>

TypeScript
<pre>
export class btDispatcherInfo {
    get_m_timeStep():number;
    set_m_timeStep(value:number):void;
}
</pre>

## Operators

The following operators are translated:

|C++|TypeScript|
|---|----------|
|=|op_set|
|+|op_add|
|-|op_sub|
|*|op_mul|
|/|op_div|
|[]|op_get|
|==|op_eq|

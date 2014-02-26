Background
==========

With tools such as [Emscripten](https://github.com/kripken/emscripten/wiki), it is possible to compile LLVM languages to JavaScript. The C family of languages are strongly typed languages which are compiled into loosely typed JavaScript. [Typescript](http://www.typescriptlang.org/), a superset of JavaScript, is strongly typed and lends itself very well to the situation. Typescript requires type declarations similar to header files in C++ when one is working with existing JavaScript files. 

Writing d.ts files manually can be very cumbersome and error prone. C2T is a tool that converts C++ header definitions into TypeScript type declarations. This makes it very convenient to convert an existing C++ library to JavaScript with Emscripten and then via this tool easily consume it in TypeScript.

Prerequisites
=============

I've created this library on Ubuntu 13.10 so the instructions I'm providing are based on Ubuntu, but you should be able to find the equivalent for your platform easily.

Python
------

The script that creates the type declarations in written in Python.  
<pre>
apt-get install python
</pre>

CppHeaderParser
---------------

I'm utilizing the [CppHeaderParser](https://pypi.python.org/pypi/CppHeaderParser/) Python package to perform the parsing of the header files. To install it, you can use the Python package manager.

<pre>
apt-get install python-pip
pip install ply
pip install CppHeaderParser
</pre>

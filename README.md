Background
==========

With tools such as [Emscripten](https://github.com/kripken/emscripten/wiki), it is possible to compile LLVM languages to JavaScript. The C family of languages are strongly typed languages which are compiled into loosely typed JavaScript. [Typescript](http://www.typescriptlang.org/), a superset of JavaScript, is strongly typed and lends itself very well to the situation. Typescript requires type declarations similar to header files is C++ when one is working with existing JavaScript files. 

Writing d.ts files manually can be very cumbersome and error prone. C2T is a tool that converts C++ header definitions into TypeScript type declarations. This makes it very convenient to convert an existing C++ library to JavaScript with Emscripten and then via this tool easily consume it in TypeScript.

Prerequisites
=============

I've created this library on Ubuntu 13.10 so the instructions I'm providing are based on Ubuntu, but you should be able to find the equivalent for your platform easily.

Python
------

The script that creates the type declarations in written in Python.  
<pre>
sudo apt-get install python
</pre>

LLVM
----
The LLVM toolset is used to parse the header files, install the required libraries as such:
<pre>
sudo apt-get install clang
sudo apt-get install llvm
</pre>

Clang Python Bindings
---------------------

This one is a bit tricky because the Python Clang bindings are not part of the binary distribution of Clang, so, you have to manually install it.

<pre>
git clone git@github.com:trolldbois/python-clang.git python-clang
cd python-clang
python setup.py install
</pre>

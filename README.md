# Check-Operative-System

How to check the operating system (aka OS) and run different code from the same source code.

## Usage

<details><summary><b>Show instructions</b></summary>

1. Download and compile:
  ```sh
  $ g++ -std=c++11 main.cpp unix_functions.cpp windows_functions.cpp -o CheckOS
  
  $ ./CheckOS
  ```
 
</details>

## Motivation

I needed a way to determine which is the OS where the code is being compiled FROM THE SOURCE 
CODE (if it's possible), this can be helpful for those projects/programs that need to operate 
on multiple OS.

## Why

So i (and you) can easily write one code.

## Problem solved

Need to write different source code for different OS.

## Knowledge

The importance and utility of system MACROS.

## Improvable

Yes, definitely.

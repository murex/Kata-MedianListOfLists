# Profiling C++ Code 

For C++, we will be using the Visual Studio built-in ***Performance Profiler*** tool.

Note that you need an executable file to proceed with this profiling step. Make sure to run the
application at least once before proceeding to the next steps!

To profile your code, follow the below steps:

## With VisualStudio 2017

1. Make sure to enable the benchmark test case in [test/BenchmarkTest.cpp](test/BenchmarkTest.cpp)
2. Go to `Debug` > `Performance Profiler...`
3. Click on the `Change Target` drop-down button, and choose `Executable`
4. Make sure the `Performance Wizard` checkbox is checked
5. Click on the `Start` button. This should open the window `Performance Wizard`
6. Choose the `CPU Sampling` option then click `Next`
7. Choose the `An executable (.EXE file)` option then click `Next`
8. From `What is the full path to the executable?`, select the .exe file associated with this kata.
   It should be under [cpp/build/bin/Debug](cpp/build/bin/Debug).
9. Click `Next`
9. Make sure the box `Launch profiling after the wizard finishes` is checked
10. Click on `Finish`
11. Once the report is finalized, you can go to the `Call Tree` view to analyze the time consumed by each function.
12. Improve your code and redo steps 1 to 8

## With VisualStudio 2019 and 2022

1. Make sure to enable the benchmark test case in [test/BenchmarkTest.cpp](test/BenchmarkTest.cpp)
2. Go to `Debug` > `Performance Profiler...`
3. Click on the `Change Target` drop-down button, and choose `Executable`
4. From `Path to the executable?`, select the .exe file associated with this kata.
   It should be under [cpp/build/bin/Debug](cpp/build/bin/Debug).
5. Click `OK`
6. Select `CPU Usage`
7. Click on `Start` button 
8. Once the report is finalized, you can set `Current View` dropdown to `Functions`
9. Improve your code and redo steps 1 to 8

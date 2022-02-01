# Profiling C++ Code 

For C++, we will be using the Visual Studio built-in ***Performance Profiler*** tool.

Note that you need an executable file to proceed with this profiling step. Make sure to run the
application at least once before proceeding to the next steps!

To profile your code, follow the below steps:

1. Go to ``Analyze`` > ``Performance Profiler...``
2. Click on the ``Start`` button. This should open the window ``Performance Wizard``
3. Choose the ``Instrumentation`` option then click ``Next``
4. Choose the ``An executable (.EXE file)`` option then click ``Next``
5. From ``What is the full path to the executable?``, select the .exe file associated with this kata.
   It should be under [cpp\build\bin\Debug](cpp/build/bin/Debug).
6. Click ``Next``
7. Make sure the box ``Launch profiling after the wizard finishes`` is checked
8. Click on ``Finish``
9. Once the report is finalized, you can go to the ``Call Tree`` view to analyze the time consumed by each function.
10. Improve your code and redo steps 1 to 8
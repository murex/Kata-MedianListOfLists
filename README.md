[![Gradle](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/gradle.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/gradle.yml)
[![Maven](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/maven.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/maven.yml)
[![CMake](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/cmake.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/cmake.yml)
[![Check Markdown links](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/markdown-link-check.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/markdown-link-check.yml)
[![Add contributors](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/contributors.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/contributors.yml)

# Median of a List of Lists (with no concatenation)

![Kata Image](images/CPU.jpg) <br>
"[CPU Heat Sink](https://unsplash.com/photos/nLFqr9Mr9H8)" by [Michael Dziedzic](https://unsplash.com/@lazycreekimages) is licenced under [Unsplash License](https://unsplash.com/license)

## Description

Refer first to the [Problem Description Email](doc/Email1-ProblemDescription.md),
then to the [Solution Email](doc/Email2-Solution.md) (⚠ Spoiler).

### Profiling

Profiling is the process of analyzing the space and time complexity of your program. You can use code profiling 
to optimize and improve the performance of your code.   

For this kata, you can profile your code to improve your initial greedy solution! Therefore, do not
attempt this step before writing the greedy solution.

#### Java
For Java, we will be using ***VisualVM*** to profile the code. VisualVM is a lightweight profiling tool that 
used to be packaged with JDK until JDK 9. Therefore, it would be better to download the latest version to benefit from 
the new features.

To profile your code, follow the below steps:

1. Download [VisualVM](https://visualvm.github.io/download.html)
2. Start VisualVM by running the following command:

   ``visualvm\bin\visualvm.exe --jdkhome "<path to JDK>"``
3. Run your benchmark test:
   1. Gradle: ``gradlew test --tests "<TestClassName>"``
   2. Maven: ``mvnw -Dtest="<TestClassName>" test ``
4. From VisualVM:
   1. Expand the ``Local`` group under the  ``Applications`` window
   2. Right click on ``org.openjdk.jmh.runner.ForkedMain``
   3. Select ``Sample ``, this should open a dedicated tab dedicated to this process 
   4. Click on ``CPU`` button
   5. Under the ``CPU Samples`` tab, you should see a thread associated to the test or main class you are running. 
   6. Expand that thread and play analyze where most of the time is consumed 
5. Improve your code and redo steps 3 & 4  
 
#### C++ 
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

## Getting Started

- [Java](java/GETTING_STARTED.md)
- [C++](cpp/GETTING_STARTED.md)

## Session Quick Retrospective

You can fill it from [here](QuickRetrospective.md)

## Useful Links

### For this Kata

- [Wikipedia - Median](https://en.wikipedia.org/wiki/Median)
- [Online Median Calculator](https://www.easycalculation.com/statistics/median-calculator.php)
- [Another One](http://www.alcula.com/calculators/statistics/median/)

### General

- [TCR (Test && Commit || Revert) wrapper](tcr/TCR.md) utility
- Handy for any type of turn-based session: [Online Timer](https://agility.jahed.dev/)

## Session Information

### Style & Duration

- 2-hour [Randori in Pairs](doc/RandoriInPairs.md)

### Topic

- TDD on algorithms

### Focus Points

- Acceptance tests
- Greedy or not?
- ⚠ Premature optimization

### Source Files

- [Java](java)
- [C++](cpp)

## License

`Kata-MedianListOfLists` and the accompanying materials are made available
under the terms of the [MIT License](LICENSE.md) which accompanies this
distribution, and is available at the [Open Source site](https://opensource.org/licenses/MIT)

## Acknowledgements

See [ACKNOWLEDGEMENTS.md](ACKNOWLEDGEMENTS.md) for more information.

## Contributors

<table>
<tr>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/mengdaming>
            <img src=https://avatars.githubusercontent.com/u/1313765?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Damien Menanteau/>
            <br />
            <sub style="font-size:14px"><b>Damien Menanteau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/aatwi>
            <img src=https://avatars.githubusercontent.com/u/11088496?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Ahmad Atwi/>
            <br />
            <sub style="font-size:14px"><b>Ahmad Atwi</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/philou>
            <img src=https://avatars.githubusercontent.com/u/23983?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Philippe Bourgau/>
            <br />
            <sub style="font-size:14px"><b>Philippe Bourgau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/AntoineMx>
            <img src=https://avatars.githubusercontent.com/u/77109701?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=AntoineMx/>
            <br />
            <sub style="font-size:14px"><b>AntoineMx</b></sub>
        </a>
    </td>
</tr>
</table>

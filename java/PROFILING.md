# Profiling Java Code 

For Java, we will be using ***VisualVM*** to profile the code. VisualVM is a lightweight profiling tool that
used to be packaged with JDK until JDK 9. Therefore, it would be better to download the latest version to benefit from
the new features.

To profile your code, follow the below steps:

1. Download [VisualVM](https://visualvm.github.io/download.html)
2. Start VisualVM by running the following command:

   ``visualvm\bin\visualvm.exe --jdkhome "<path to JDK>"``
3. Run your benchmark test:
    1. Gradle: ``./gradlew clean test --tests BenchmarkTest``
    2. Maven: ``./mvnw clean test -Dtest=BenchmarkTest ``
4. From VisualVM:
    1. Expand the ``Local`` group under the  ``Applications`` window
    2. Right click on ``org.openjdk.jmh.runner.ForkedMain``
    3. Select ``Sample ``, this should open a dedicated tab dedicated to this process
    4. Click on ``CPU`` button
    5. Under the ``CPU Samples`` tab, you should see a thread associated to the test or main class you are running.
    6. Expand that thread and play analyze where most of the time is consumed
5. Improve your code and redo steps 3 & 4  
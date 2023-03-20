# Profiling Python Code


You can refer to the 2 following links:
- [Yappi profiler](https://github.com/sumerc/yappi#readme)
- [Snakeviz (browser-based profile graphical viewer)](https://jiffyclub.github.io/snakeviz/#snakeviz)

## 1 - Open a terminal and go to the kata's `python` directory

```shell
cd Kata-MedianListOfLists/python
```

## 2 - Start the python virtual environment

Although not mandatory, we recommend running profiling commands in a virtual environment in order
to prevent interferences with other python projects that you may have on your machine.

This also ensures that the module dependencies used for profiling are satisfied.

To create and start the python virtual environment:

```shell
./start_python_venv.sh
```

## 3 - Run the provided benchmark

The code used to run the benchmark is available [here](tests/median_list_of_lists_benchmark.py)

```shell
python tests/median_list_of_lists_benchmark.py
```

This command saves the profiling data into a file called `median_list_of_lists.prof`

## 4 - Browse and analyze profiling data (web interface)

Although the previous command displays benchmark results in the terminal trace,
`snakeviz` utility provides a more user-friendly way to browse and navigate the results.

```shell
snakeviz median_list_of_lists.prof
```

This command starts a web server listening on `http=localhost:8080`

Feel free to use a different port number through adding the option `-p <port_number>` to the command

## 5 - Improve your code and repeat

Once you have a new improved version ot the code, restart from step 3.

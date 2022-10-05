# Profiling Go Code

You can refer to the 2 following links:
- [How to write benchmarks in Go](https://dave.cheney.net/2013/06/30/how-to-write-benchmarks-in-go)
- [pprof documentation](https://github.com/google/pprof/tree/main/doc)

We will leverage on Go language's built-in tools for generating benchmarks.

We will then use  [pprof](https://github.com/google/pprof) to profile the code.

## 1 - Install `pprof` tool

```shell
go install github.com/google/pprof@latest
```

## 2 - Run the provided benchmark

The code used to run the benchmark is available [here](src/median_list_of_lists/benchmark_test.go)

```shell
go test -v -benchmem -cpuprofile cpu.prof -bench=. ./...
```

## 3 - Launch the profiler (web interface)

```shell
pprof -http=localhost:5000 cpu.prof
```

This command starts a web server listening on `http=localhost:5000`

Feel free to use a different port number.

## 4 - Browse and analyze profiling data

Open `http=localhost:5000` in a browser and go through execution details
to identify parts of the code to optimize.

You can use pprof's `VIEW` menu to choose which view to display.

## 5 - Improve your code and repeat

Once you have a new improved version ot the code, restart from step 2.

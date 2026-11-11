# Green Tech Efficiency Analysis

## Measurement Methodology

I measured the supplied C programs in the `benchmarking` directory. I compiled them with the required GCC options: `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. I did not modify the baseline source. Its loop performs 100,000,000 iterations, and its `clock()` values are converted to seconds using `CLOCKS_PER_SEC`. I ran it three consecutive times and recorded the full output in `baseline_loop-metrics.md`: 0.228575, 0.227318, and 0.240293 seconds. Their average is 0.232062 seconds.

The comparison program measures the Naive and Single-pass functions separately with `clock()`. I ran it three times and recorded both times from each run. For each implementation, I added its three recorded times and divided by three to calculate the average. In the instrumentation program, I placed clock readings immediately before and after each phase, and around all three phases together. Each duration was calculated as `(end - start) / CLOCKS_PER_SEC` and printed to six decimal places.

## Observed Performance Differences

The Naive times were 2.777091, 2.763561, and 2.773164 seconds. The average was 2.771272 seconds. The Single-pass time was 0.000106 seconds in each run, so its average was 0.000106 seconds. Dividing the displayed averages gives an approximate ratio of 26,144. In these runs, Naive took about 26,144 times as long as Single-pass. This ratio is approximate because the Single-pass time is very small and is displayed to only six decimal places.

The code structure also explains the growth rates: the nested loops in Naive are O(n²), while the single loop in Single-pass is O(n). The returned values reveal an important limitation: Naive returned 625025000, while Single-pass returned 25000. Naive repeatedly counts even values in each prefix of the array; Single-pass checks each element once. Therefore, the functions do not return equivalent results, and the timing ratio is not a fair speedup comparison between two implementations performing exactly the same task.

In the instrumentation run, TOTAL was 0.000816 seconds. BUILD_DATA took 0.000296 seconds, PROCESS took 0.000332 seconds, and REDUCE took 0.000180 seconds. PROCESS was the largest measured phase and REDUCE was the smallest. The phase times sum to 0.000808 seconds, which is 0.000008 seconds below TOTAL.

## Relation Between Runtime and Energy Consumption

Runtime can help reason about efficiency because a processor doing work for longer may remain active for longer. Under comparable hardware and operating conditions, avoiding unnecessary computation can create an opportunity to reduce energy use. In this experiment, the comparison times differ greatly, and PROCESS was the largest phase in the instrumentation run. However, the programs measured execution time, not electrical power or energy. These results cannot establish watts, joules, or carbon emissions.

## Limitations of the Experiment

The three baseline times ranged from 0.227318 to 0.240293 seconds, showing that repeated measurements were not identical. The Single-pass time is very small, so its ratio is sensitive to timing resolution and small changes. The instrumentation results come from one run, so the phase ranking is an observation from that run only. Also, the comparison functions returned different values, limiting the fairness of their timing comparison. Results may differ in another execution environment or under a different system load.

## Practical Engineering Takeaway

Measure before drawing conclusions, repeat short benchmarks, record the actual outputs, and state exactly what each timing includes. Big-O analysis describes how work grows with input size, while benchmarking records what happened in a particular environment. Before claiming that one implementation is a faster replacement, verify that both produce the same correct result. Treat runtime as a proxy for energy only; direct energy measurements are needed to quantify energy savings.


# Algorithmic Efficiency Comparison

## Run 1

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.777091 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

## Run 2

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.763561 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

## Run 3

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.773164 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

## Average Execution Time

- Naive average: 2.771272 seconds
- Single-pass average: 0.000106 seconds

## Relative Performance

Naive is approximately 26,144 times slower than
Single-pass based on the measured average execution times.

## Time Complexity

- Naive: O(n^2)
- Single-pass: O(n)

## Observation

The execution times varied slightly between runs.

The two implementations produced different result values.
The naive implementation counts even elements repeatedly
across prefixes, while the single-pass implementation
counts each even element once.

The source code was not modified.

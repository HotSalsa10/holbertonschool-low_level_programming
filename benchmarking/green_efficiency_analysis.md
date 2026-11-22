# Green Tech Efficiency Analysis

## Measurement Methodology

I used three C programs to compare execution time. I compiled them with the required GCC flags and ran them on the same computer. I kept the supplied algorithms and input data unchanged.

The baseline loop ran 100 million iterations. Its three times were 0.205847, 0.163268, and 0.132557 seconds. The average was 0.167224 seconds.

The algorithm comparison ran three times. The naive algorithm took 1.467221, 1.234069, and 1.222700 seconds. Its average was 1.307997 seconds. The single-pass algorithm took 0.000034, 0.000034, and 0.000036 seconds. Its average was 0.000034667 seconds.

For the instrumentation test, I used clock() to time the full program and each phase. I converted clock values to seconds with CLOCKS_PER_SEC.

## Observed Performance Differences

The baseline loop took less time in each run. The first run took 0.205847 seconds. The third took 0.132557 seconds. This shows that repeated runs can produce different times.

The naive algorithm was about 37,731 times slower than the single-pass algorithm, based on their average times. However, their results were different. The naive function returned 625025000. The single-pass function returned 25000. The naive function counts even values in repeated array prefixes. The single-pass function counts each element once. Therefore, this timing ratio does not compare two implementations that produce the same result.

The instrumentation test measured 0.001173 seconds in total. Dataset construction took 0.000522 seconds. Processing took 0.000490 seconds. Checksum reduction took 0.000152 seconds. The phase times add up to 0.001164 seconds. The remaining 0.000009 seconds is outside the measured phase intervals.

## Relation Between Runtime and Energy Consumption

These tests measured processor time, not energy. A shorter runtime does not prove lower energy use. Energy depends on power use over time. I would need power or energy measurements to make a supported comparison. The timing results can show which work takes longer, but they cannot show how much energy each phase uses.

## Limitations of the Experiment

I used three runs for the baseline and algorithm comparison, but only one run for instrumentation. More runs would give stronger evidence about timing variation. I used one computer and one compiler environment, so results may differ elsewhere. The clock() function measures processor time, not wall-clock time. Its resolution can also affect very short measurements.

The algorithm comparison has an additional limitation: the functions return different results. This makes the speed ratio unsuitable as a fair comparison of equivalent solutions. I did not measure memory use, power, or energy.

## Practical Engineering Takeaway

These tests show why engineers should measure programs before changing them. Repeated runs help reveal timing variation. Phase measurements help identify where a program spends time. Algorithm comparisons are useful only when the implementations produce the same correct result. Runtime is one part of efficiency. A complete energy study also needs direct energy measurements.

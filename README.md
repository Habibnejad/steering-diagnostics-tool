# steering-diagnostics-tool

Diagnostic and health monitoring tool for steering systems.

## Overview
This repository contains an example C program that demonstrates how to perform simple diagnostics on electric power steering (EPS) systems. The program checks simulated torque and angle sensor values and flags any readings that exceed safe operating limits.

## Features
- Reads sample torque and angle sensor data.
- Compares readings against configurable thresholds.
- Prints warnings when sensor values are outside acceptable ranges.
- Serves as a template for more advanced diagnostic tools.

## Getting Started
1. Compile the `main.c` file with a C compiler such as gcc:
   ```bash
   gcc -o diagnostics main.c
   ```
2. Run the compiled program:
   ```bash
   ./diagnostics
   ```

The output will show sensor values and warning messages for any values that exceed the defined thresholds.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

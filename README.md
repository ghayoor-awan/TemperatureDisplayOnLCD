### Temperature Display System

This Arduino-based project measures and displays temperature using a LM35 temperature sensor. The system reads analog data from the LM35 sensor, converts it into Celsius, and presents the real-time temperature readings on an LCD screen.

The code utilizes the analogRead function to capture data from the LM35 sensor connected to pin A0. It then calculates the temperature in Celsius based on the obtained analog readings. The calculated temperature value is displayed on a 16x2 LCD screen.

**Operation**:

- The LM35 sensor provides analog data that is converted into a digital value.
- Using this digital value, the code computes the temperature in Celsius and displays it on the LCD screen.
- Serial communication is established to provide temperature readings in Celsius via the serial monitor.

**Simulation**: The code has been simulated using Tinkercad, offering a virtual representation of the project's functionality. You can explore and test the simulated project [here](https://www.tinkercad.com/things/8nvhuJfm8iW-temperature-display).

This project serves as a fundamental temperature monitoring system, demonstrating the integration of an LM35 sensor with Arduino for temperature measurement and display.

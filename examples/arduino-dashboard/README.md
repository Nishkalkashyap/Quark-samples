# Arduino Dashboard
Create a dashboard and a data logger for Arduino.

![image](https://i.imgur.com/vnvEMNx.gif)

## Features
__Serialport selector:__ A graphical user interface component that allows you to select the serialport for your Arduino.

<p align="left">
    <img src="https://i.imgur.com/fPOeavH.png" width="500">
</p>

__Dashboard:__ A dashboard that prints the real time values on the screen and also draws charts.

<p align="left">
    <img src="https://i.imgur.com/GuQHONO.png" width="500">
</p>

__Datalogger:__ A data logger that will read data from arduino and save it on your computer in csv format.

<p align="left">
    <img src="https://i.imgur.com/a7a4CmV.png" width="500">
</p>

## Using the build file
* First upload the arduino sketch.
* Now connect the dashboard to the arduino. Select the serialport of your arduino by pressing `ctrl+p`.
* Now, to use the data logger, open the [commands palette](https://quarkjs.io/guide/quark-ide.html#command-palette) by pressing `ctrl+shift+p`, and select `Datalogger: Start` command. This will start the data logger.
* To stop the data logger, open the commands palette and select command `Datalogger: Stop`. This will stop the data logger and open a save dialog.

## Getting started

- Clone this repository
- `cd examples/arduino-dashboard`
- Upload sketch to the arduino.
- Open project file `arduino-dashboard.qrk`, or build file `arduino-dashboard.build.qrk` in Quark.

## Going further

Here are some ideas on how it can be improved using other Quark API's.

- Add buttons on status bar to start or stop data logger.
- Convert the bar chart into a pie chart.
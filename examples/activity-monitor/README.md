# Activity Monitor
Simple sketch that shows a doughnut chart of the CPU system, user, and idle activity time.

> Note: This project is inspired from [this electron sample app.](https://github.com/electron/simple-samples/tree/master/activity-monitor)

![image](https://i.imgur.com/oSEeu18.png)

## Getting started

- Clone this repository
- `cd examples/activity-monitor`
- Upload sketch to the arduino.
- Open project file `arduino-dashboard.qrk`, or build file `arduino-dashboard.build.qrk` in Quark.

## Going further

Here are some ideas on how it can be improved using other Quark API's.

- Add tooltips that show times in hours/days instead of milliseconds
- Support exporting CPU times to a comma-separated (.csv) file
- Support saving chart as PNG
- Support copying chart image to clipboard
- Add second chart of free vs. used memory
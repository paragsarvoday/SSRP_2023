# Smart Bicycle Safety Monitoring App

This project aims to develop a child-monitoring app to monitor a child's safety while cycling. The system detects overspeeding, falls, and boundary crossing, and alerts the parents in real-time.

## Features

1. **Overspeed Detection**: Continuously monitors the speed of the child's phone (Phone A) using GPS and triggers alerts if the speed exceeds a predefined limit.
   
2. **Fall Detection**: Detects falls based on data from the gyroscope and accelerometer and avoids false positives caused by bumps or braking.

3. **Boundary Crossing**: Monitors the child's location using GPS and alerts parents if the child crosses a predefined geographical boundary.

4. **Real-time Alerts**: 
   - If overspeeding or boundary crossing is detected, an alarm plays on Phone A, and a notification is sent to the parent's phone (Phone B).
   - If a fall is detected, an alarm plays on Phone A. If not switched off within 5 seconds, the app automatically starts recording audio and video, sending an SOS alert to Phone B with real-time location and media.

## App Workflow

- **On Boundary Crossing or Overspeed**:
  - Phone A (child's phone) plays a beep alarm.
  - Phone B (parent's phone) displays the real-time location of Phone A on a map and plays a beep sound.

- **On Fall Detection**:
  - Phone A plays a beep alarm with an option to switch off.
  - If the alarm is not switched off in 5 seconds:
    - The microphone and camera of Phone A are activated, and recording starts.

## Simulink Project Files

- Child's phone (Phone A):
  - `Child_App.slx`
  - `Map_Child.slx`
  
- Parent's phone (Phone B):
  - `Parent_App.slx`
  - `Map_Parent.slx`

> **Note:** You must have the Simulink Android Support Package installed to open these files. To install the apps on a smartphone, open the provided Simulink project files in MATLAB Simulink and hit "Deploy" while keeping your smartphone connected to your computer.

## Video Explanation

For a detailed explanation of the project, watch the video:

[![Smart Bicycle Safety Monitoring App](![image]([https://github.com/user-attachments/assets/f50c0923-b9d2-43c4-b7f1-4e1fad35aa5a](https://github.com/paragsarvoday/SSRP_2023/blob/master/Intro.jpg)))](https://www.youtube.com/watch?v=cZvXqqwKNAc)

## How to Use

1. Open the `Child_App.slx` and `Map_Child.slx` on MATLAB Simulink for the child's phone.
2. Open the `Parent_App.slx` and `Map_Parent.slx` on MATLAB Simulink for the parent's phone.
3. Deploy both apps by connecting the respective phones to your computer and hitting "Deploy" on Simulink.

Enjoy safe and worry-free cycling!



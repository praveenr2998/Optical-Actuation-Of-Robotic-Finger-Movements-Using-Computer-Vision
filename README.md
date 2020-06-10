# Optical-Actuation-Of-Robotic-Finger-Movements-Using-Computer-Vision
<p align="center">
  <img src="image-Of-Project" width="350" title="Project-Image">
  
</p>

This project aims to provide actuation signals for robotic finger movements using optical/visual method. I have used computer vision to track the finger movements and provide actuation signals to the robotic arm.


This project is done using Anaconda which is opensource and tensorflow object detection - API

The drive link for downloading the model : https://drive.google.com/drive/folders/1vn2AIGtiDnq1qWZo__HGPQLemYADY-lI?usp=sharing


# REQUIREMENTS:
            LIBRARIES:TENSORFLOW-1.13.1, CUDNN-7.4, CUDA-10.0
                      Protobuf, Pillows, lxml, Cython, Contextlib2, Jupyter, Matplotlib, Pandas, Open-cv, serial, time, statistics, os,                       CV2, numpy.
                      
                      
To build the model i followed the instructions mentioned in this Github repository by "Edge Electronics" - https://github.com/EdjeElectronics/TensorFlow-Object-Detection-API-Tutorial-Train-Multiple-Objects-Windows-10 


I have used my own images to train the classifier. It is based of Google's Faster RCNN V2 COCO. The neural network would detect the orientation of fingers. The sample images are given in files img-1,img-2,img-3,img-4,img-5,img-6.  

# STEPS TO RUN THE MODEL AND OBTAIN THE SIMILAR OUTPUT
---> All you need to do is create an environment with the above given specifications and download the model-r1.13.0 file.

---> After creating the environment the execution file will be present in the directory : models-r1.13.0\models-r1.13.0\research\object_detection

---> In this directory if you want just the finger-count/orientation detection part run Object_detetection_webcam.py.

---> If you have the hardware to then run Object_detection_webcam-serial_communication.py.


# HARDWARE
Arduino-Uno,4-Servo-Motors,a robotic arm frame redesigned to suit the need.

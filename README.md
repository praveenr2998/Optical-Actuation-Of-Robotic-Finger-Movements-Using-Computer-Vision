# Visual-Actuation-Of-Robotic-Movements

This project aims to provide actuation signals for robotic finger movements using optical/visual method. I have used computer vision to track the finger movements and provide actuation signals to the robotic arm.


This project is done using Anaconda which is opensource and tensorflow object detection - API


REQUIREMENTS:
            LIBRARIES:TENSORFLOW-1.13.1, CUDNN-7.4, CUDA-10.0
                      Protobuf, Pillows, lxml, Cython, Contextlib2, Jupyter, Matplotlib, Pandas, Open-cv
                      
                      
To build the model i followed the instructions mentioned in this Github repository by "Edge Electronics" - https://github.com/EdjeElectronics/TensorFlow-Object-Detection-API-Tutorial-Train-Multiple-Objects-Windows-10 


I have used my own images to train the classifier. It is based of Google's Faster RCNN V2 COCO. The neural network would detect the orientation of fingers.

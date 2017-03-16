QT += core
QT -= gui
QT += multimedia

CONFIG += c++11

TARGET = webCams
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

win32:CONFIG(release, debug|release): LIBS += -LC:\\Qt\\opencv\\build\\bin \
  libopencv_core310 \
  libopencv_highgui310 \
  libopencv_imgproc310 \
  libopencv_imgcodecs310 \
  libopencv_video310 \
  libopencv_videoio310
else:win32:CONFIG(debug, debug|release): LIBS += -LC:\\Qt\\opencv\\build\\bin \
  libopencv_core310d \
  libopencv_highgui310d \
  libopencv_imgproc310d \
  libopencv_imgcodecs310d \
  libopencv_video310d \
  libopencv_videoio310d
INCLUDEPATH += C:\\Qt\\opencv\\build\\include
DEPENDPATH += C:\\Qt\\opencv\\build\\include

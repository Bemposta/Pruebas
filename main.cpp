#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <QCamera>
#include <QCameraInfo>

using namespace cv;
using namespace std;


void cargarCamaras()
{
    QList<QByteArray> lista;
    int camDisp;

    lista = QCamera::availableDevices();
    camDisp=lista.size();

    for (int i=0; i<camDisp; i++)
    {
        cout << i ;//<< ", " << lista[i] << endl;
    }
}
/*
void SimpleEnumerateDirectShowCameras()
{
    int maxID = 5;
    for (int idx = 0; idx < maxID; idx++)
    {
        VideoCapture cap(CV_CAP_DSHOW + idx);  // open the camera
        // cap.release();
    }
}

int main()
{
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    cout << "Camaras: " << cameras.count() << endl;
    foreach (const QCameraInfo &cameraInfo, cameras) {
        cout << "deviceName()" << cameraInfo.deviceName().toStdString() << endl;
    }
    //SimpleEnumerateDirectShowCameras();
    return 0;
}
*/


int main(void)
{
    VideoCapture cap;
    cap.open(CV_CAP_DSHOW+0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    cout << "CAP_PROP_POS_MSEC: " << cap.get(CAP_PROP_POS_MSEC) << endl;
    cout << "CAP_PROP_POS_FRAMES: " << cap.get(CAP_PROP_POS_FRAMES) << endl;
    cout << "CAP_PROP_POS_AVI_RATIO: " << cap.get(CAP_PROP_POS_AVI_RATIO) << endl;
    cout << "CAP_PROP_FRAME_WIDTH: " << cap.get(CAP_PROP_FRAME_WIDTH) << endl;
    cout << "CAP_PROP_FRAME_HEIGHT: " << cap.get(CAP_PROP_FRAME_HEIGHT) << endl;
    cout << "CAP_PROP_FPS: " << cap.get(CAP_PROP_FPS) << endl;
    cout << "CAP_PROP_FOURCC: " << cap.get(CAP_PROP_FOURCC) << endl;
    cout << "CAP_PROP_FRAME_COUNT: " << cap.get(CAP_PROP_FRAME_COUNT) << endl;
    cout << "CAP_PROP_POS_MSEC: " << cap.get(CAP_PROP_POS_MSEC) << endl;
    cout << "CAP_PROP_FORMAT: " << cap.get(CAP_PROP_FORMAT) << endl;
    cout << "CAP_PROP_MODE: " << cap.get(CAP_PROP_MODE) << endl;
    cout << "CAP_PROP_BRIGHTNESS: " << cap.get(CAP_PROP_BRIGHTNESS) << endl;
    cout << "CAP_PROP_CONTRAST: " << cap.get(CAP_PROP_CONTRAST) << endl;
    cout << "CAP_PROP_SATURATION: " << cap.get(CAP_PROP_SATURATION) << endl;
    cout << "CAP_PROP_HUE: " << cap.get(CAP_PROP_HUE) << endl;
    cout << "CAP_PROP_GAIN: " << cap.get(CAP_PROP_GAIN) << endl;
    cout << "CAP_PROP_EXPOSURE: " << cap.get(CAP_PROP_EXPOSURE) << endl;
    cout << "CAP_PROP_CONVERT_RGB: " << cap.get(CAP_PROP_CONVERT_RGB) << endl;
    //cout << "CAP_PROP_WHITE_BALANCE: " << cap.get(CAP_PROP_WHITE_BALANCE) << endl;
    cout << "CAP_PROP_RECTIFICATION: " << cap.get(CAP_PROP_RECTIFICATION) << endl;
    waitKey(400);
    cap.release();

    cap.open(1);
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    cout << "CAP_PROP_POS_MSEC: " << cap.get(CAP_PROP_POS_MSEC) << endl;
    cout << "CAP_PROP_POS_FRAMES: " << cap.get(CAP_PROP_POS_FRAMES) << endl;
    cout << "CAP_PROP_POS_AVI_RATIO: " << cap.get(CAP_PROP_POS_AVI_RATIO) << endl;
    cout << "CAP_PROP_FRAME_WIDTH: " << cap.get(CAP_PROP_FRAME_WIDTH) << endl;
    cout << "CAP_PROP_FRAME_HEIGHT: " << cap.get(CAP_PROP_FRAME_HEIGHT) << endl;
    cout << "CAP_PROP_FPS: " << cap.get(CAP_PROP_FPS) << endl;
    cout << "CAP_PROP_FOURCC: " << cap.get(CAP_PROP_FOURCC) << endl;
    cout << "CAP_PROP_FRAME_COUNT: " << cap.get(CAP_PROP_FRAME_COUNT) << endl;
    cout << "CAP_PROP_POS_MSEC: " << cap.get(CAP_PROP_POS_MSEC) << endl;
    cout << "CAP_PROP_FORMAT: " << cap.get(CAP_PROP_FORMAT) << endl;
    cout << "CAP_PROP_MODE: " << cap.get(CAP_PROP_MODE) << endl;
    cout << "CAP_PROP_BRIGHTNESS: " << cap.get(CAP_PROP_BRIGHTNESS) << endl;
    cout << "CAP_PROP_CONTRAST: " << cap.get(CAP_PROP_CONTRAST) << endl;
    cout << "CAP_PROP_SATURATION: " << cap.get(CAP_PROP_SATURATION) << endl;
    cout << "CAP_PROP_HUE: " << cap.get(CAP_PROP_HUE) << endl;
    cout << "CAP_PROP_GAIN: " << cap.get(CAP_PROP_GAIN) << endl;
    cout << "CAP_PROP_EXPOSURE: " << cap.get(CAP_PROP_EXPOSURE) << endl;
    cout << "CAP_PROP_CONVERT_RGB: " << cap.get(CAP_PROP_CONVERT_RGB) << endl;
    //cout << "CAP_PROP_WHITE_BALANCE: " << cap.get(CAP_PROP_WHITE_BALANCE) << endl;
    cout << "CAP_PROP_RECTIFICATION: " << cap.get(CAP_PROP_RECTIFICATION) << endl;
    waitKey(400);
    cap.release();

    return 0;
}


#ifndef QFACEOBJECT_H
#define QFACEOBJECT_H

#include <QObject>
#include <seeta/FaceEngine.h>
#include <opencv2/opencv.hpp>

using namespace cv;

// 人脸数据存储， 人脸检测， 人脸识别
class QFaceObject : public QObject
{
    Q_OBJECT
public:
    explicit QFaceObject(QObject *parent = nullptr);
    ~QFaceObject();

public slots:
    int64_t face_register(Mat& faceimage);
    int face_query(Mat& faceImage);

signals:

private:
    seeta::FaceEngine *fengineptr;

};

#endif // QFACEOBJECT_H

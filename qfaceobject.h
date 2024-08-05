#ifndef QFACEOBJECT_H
#define QFACEOBJECT_H

#include <QObject>
#include <FaceEngine.h>

// 人脸数据存储， 人脸检测， 人脸识别
class QFaceObject : public QObject
{
    Q_OBJECT
public:
    explicit QFaceObject(QObject *parent = nullptr);

signals:
};

#endif // QFACEOBJECT_H

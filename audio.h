#ifndef H_AUDIO
#define H_AUDIO

#include <QtCore/QWaitCondition>
#include <QtCore/QThread>
#include <QtCore/QDataStream>
#include <QtCore/QMutex>
#include <QtCore/QIODevice>
#include <QtCore/QObject>
#include <QtCore/QBuffer>
#include <QtCore/QIODevice>
#include <QtCore/QThread>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <QtMultimedia/QAudioFormat>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QAudioOutput>


class Audio: public QObject
{
    Q_OBJECT

private:
    QAudioFormat *m_format;
    QTcpSocket   *m_sock;

    QAudioInput  *m_input;
    QIODevice    *m_inputDevice;

    QAudioOutput *m_output;
    QIODevice    *m_outputDevice;

    QHostAddress  m_peerAddress;
    quint16       m_peerPort;

    QHostAddress  m_broker;
    quint16       m_port;

public:

    Audio(QHostAddress broker, quint16 port, QObject *parent);
    ~Audio();

    void init(QHostAddress peerAddress, quint16 peerPort);

    quint16 getPort();

private slots:
    void readSocketData();
    void readInputData();
};

#endif

#include <QtTest>

// add necessary includes here
#include <arduinolibraryskeleton.h>


class ArduinoLibrarySkeletonUnittest : public QObject
{
    Q_OBJECT

    ArduinoLibrarySkeleton m_ArduinoLibrarySkeleton;

public:
    ArduinoLibrarySkeletonUnittest();
    ~ArduinoLibrarySkeletonUnittest();

private slots:
    void test_case1();

};

ArduinoLibrarySkeletonUnittest::ArduinoLibrarySkeletonUnittest()
{
    // set stuff up here
    (void)m_ArduinoLibrarySkeleton.begin();
}

ArduinoLibrarySkeletonUnittest::~ArduinoLibrarySkeletonUnittest()
{
    // clean stuff up here
    m_ArduinoLibrarySkeleton.end();
}

void ArduinoLibrarySkeletonUnittest::test_case1()
{
    // test step 1: check default value
    QCOMPARE(m_ArduinoLibrarySkeleton.getValue(), 0);

    // test step 2: check set value
    m_ArduinoLibrarySkeleton.setValue(4711);
    QCOMPARE(m_ArduinoLibrarySkeleton.getValue(), 4711);
}

QTEST_APPLESS_MAIN(ArduinoLibrarySkeletonUnittest)

#include "qtest/tst_arduinolibraryskeleton.moc"

#include "qt_demo.h"

#include "pcap.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qt_demo w;
	w.show();


	return a.exec();
}

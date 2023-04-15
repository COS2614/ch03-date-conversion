#include <QCoreApplication>
#include <QDate>
#include <QTextStream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create a QDate object for today's date
    QDate currentDate = QDate::currentDate();

    // Display the date in various formats using QTextStream
    QTextStream out(stdout);

    out << "Today's date: " << currentDate.toString() << Qt::endl;
    out << "Year: " << currentDate.year() << Qt::endl;
    out << "Month (number): " << currentDate.month() << Qt::endl;
    out << "Month (name): " << currentDate.toString("MMMM") << Qt::endl;
    out << "Day of week (number): " << currentDate.dayOfWeek() << Qt::endl;
    out << "Day of week (name): " << currentDate.toString("dddd") << Qt::endl;
    out << "Day of year: " << currentDate.dayOfYear() << Qt::endl;

    return 0;
}

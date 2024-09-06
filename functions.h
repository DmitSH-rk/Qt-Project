#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QtSql>
#include <QDebug>

class Functions {
public:
    Functions(){
        db = QSqlDatabase::addDatabase("QODBC");
    }

    void ConnectToDB() {
        QString connectionString =
            "Driver={SQL Server};"              // Используем драйвер SQL Server
            "Server=DESKTOP-5SHM15R\\SQLEXPRESS;"  // Указываем имя сервера
            "Database=QtDb;"                // Указываем имя базы данных
            "Trusted_Connection=yes;"           // Используем интегрированную безопасность
            "Encrypt=no;";                      // Отключаем шифрование

        db.setDatabaseName(connectionString);

        if (!db.open()) {
            qDebug() << "Connection failed:" << db.lastError().text();
        } else {
            qDebug() << "Connected to database.";
        }
    }
    void InsertDb(QString login, QString pass, QString name){
        ConnectToDB();
        db.open();
        QSqlQuery query;
        query.prepare("INSERT INTO Authorize (Login, Password, Name) VALUES (:Login, :Password, :Name)");
        query.bindValue(":Login", login);
        query.bindValue(":Password", pass);
        query.bindValue(":Name", name);

        if (!query.exec()) {
            qDebug() << "Insert failed:" << query.lastError().text();
        } else {
            qDebug() << "Data inserted successfully.";
        }
        db.close();

    }
    bool CheckUs(QString login, QString name, QString pass){
        ConnectToDB();
        db.open();
        QSqlQuery query("SELECT Login, Name, Password FROM Authorize");
        while (query.next()) {
            QString dblog = query.value(0).toString();
            QString dbname = query.value(1).toString();
            QString dbpass = query.value(2).toString();
            if (dblog == login && dbname==name&& dbpass == pass){
                db.close();
                return true;
            }

        }

         db.close();
        return false;
    }
    void InsertUsEv(QString date, QString bio, QString name){
        ConnectToDB();
        if (!db.isOpen()) {
            qDebug() << "Database is not open!";
            return;
        }
        QSqlQuery query;
        query.prepare("INSERT INTO UserEvents (Date, Bio, UserName) VALUES (:Date, :Bio, :UserName)");
        query.bindValue(":Date", date);
        query.bindValue(":Bio", bio);
        query.bindValue(":UserName", name);
        if (!query.exec()) {
            qDebug() << "Insert failed:" << query.lastError().text();
        } else {
            qDebug() << "Data inserted successfully.";
        }
        db.close();
    }
    QString ShowEv(){
        ConnectToDB();
        db.open();
        QString event;
        QSqlQuery query;
        query.prepare("SELECT Date FROM UserEvents WHERE UserName = 'Dima'");
        if (query.exec()) {
            // Итерируем по всем строкам результата
            while (query.next()) {
                QString dbdate = query.value(0).toString();
                event += dbdate + "\n";  // Добавляем дату в строку и разделяем их новой строкой
            }
        } else {
            // В случае ошибки выводим её в консоль
            qDebug() << "Query execution failed:" << query.lastError().text();
        }
        db.close();
        return event;
    }
    QString ShowEvBio(){
        ConnectToDB();
        db.open();
        QString event;
        QSqlQuery query;
        query.prepare("SELECT Bio FROM UserEvents WHERE UserName = 'Dima'");
        if (query.exec()) {
            // Итерируем по всем строкам результата
            while (query.next()) {
                QString dbdate = query.value(0).toString();
                event += dbdate + "\n";  // Добавляем дату в строку и разделяем их новой строкой
            }
        } else {
            // В случае ошибки выводим её в консоль
            qDebug() << "Query execution failed:" << query.lastError().text();
        }
        db.close();
        return event;
    }
    QVector<QPair<QString, QString>> ShowUsEvent(QString name) {
        QVector<QPair<QString, QString>> events;

        // Устанавливаем соединение с БД
        ConnectToDB();

        // Создаем SQL-запрос
        QSqlQuery query;
        query.prepare("SELECT Date, Bio FROM UserEvents WHERE UserName = :name");
        query.bindValue(":name", name);

        // Проверяем выполнение запроса
        if (query.exec()) {
            while (query.next()) {
                QString dbdate = query.value(0).toString();  // Дата события
                QString dbbio = query.value(1).toString();   // Описание события

                // Добавляем данные в вектор
                events.append(qMakePair(dbdate, dbbio));
            }
        } else {
            qDebug() << "Query execution failed:" << query.lastError().text();
        }

        // Закрываем соединение
        db.close();
        return events;
    }
private:
    QSqlDatabase db;  // Объект базы данных
};

#endif // FUNCTIONS_H

#ifndef USERS_H
#define USERS_H
#include <QString>

class User {
public:
    User() = default;
    User(const QString &name) : userName(name) {}

    QString getName() const { return userName; }
    void setName(const QString &name) { userName = name; }

private:
    QString userName;
};
#endif // USERS_H

#ifndef FB2HTML_H
#define FB2HTML_H

#include <QWebElement>

class Fb2WebElement : public QWebElement
{
public:
    Fb2WebElement() {}
    Fb2WebElement(const QWebElement &x) : QWebElement(x) {}
    Fb2WebElement &operator=(const QWebElement &x) { QWebElement::operator=(x); return *this; }
    bool isSection() const;
    bool isTitle() const;

public:
    void select();
};

#endif // FB2HTML_H

#include <iostream>

enum class Months {
    m_january = 1,
    m_february,
    m_march,
    m_april,
    m_may,
    m_june,
    m_july,
    m_august,
    m_september,
    m_october,
    m_november,
    m_december
};

Months getMonth();
std::string getMonthName(Months month);

int main() {

    setlocale(LC_ALL, "Russian");

    Months month;
    std::string monthName;
    do {
        month = getMonth();
        monthName = getMonthName( month );
        std::cout << monthName << std::endl;

    } while (static_cast<int>(month) != 0);

}

Months getMonth()
{
    int mon = 0;
    std::cout << "������� ����� ������: ";
    std::cin >> mon;
    return static_cast<Months>(mon);
}

std::string getMonthName(Months month)
{
    switch (month) {
        case Months::m_january:
            return "������";
        case Months::m_february:
            return "�������";
        case Months::m_march:
            return "����";
        case Months::m_april:
            return "������";
        case Months::m_may:
            return "���";
        case Months::m_june:
            return "����";
        case Months::m_july:
            return "����";
        case Months::m_august:
            return "������";
        case Months::m_september:
            return "��������";
        case Months::m_october:
            return "�������";
        case Months::m_november:
            return "������";
        case Months::m_december:
            return "�������";
        default:
            switch (static_cast<int>(month)) {
                case 0:
                    return "�� ��������!";
                default:
                    return "������������ �����!";            
            }

    }
}

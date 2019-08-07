//
// Created by Nernandez Salas on 07/08/2019.
//

#ifndef BVA_EQUIVALENCECLASS_DATE_H
#define BVA_EQUIVALENCECLASS_DATE_H

#include <ctime>
#include <chrono>
#include<string>
#include <iomanip>
#include <iostream>

class Date{
private:
    std::time_t date;
    std::tm format;
public:
    Date(){
        date = std::time(nullptr);
        format = *std::localtime(&date);
    }

    Date(int day, int month, int year){
        format = *std::localtime( &date );
        format.tm_year = year - 1900;
        format.tm_mon = month - 1;
        format.tm_mday = day;
        date = mktime(&format);
    }

    void incrementDate(int number){
        date += number;
    }

    std::string str() const {
        return str("%d-%m-%y");
    }

    std::string str(std::string fmt) const {

        std::ostringstream ss;
        ss << std::put_time(&format, fmt.c_str());
        return ss.str();
    }

    void parse(std::string str) {

        parse(str, "%d-%m-%y");
    }

    void parse(std::string str, const std::string &fmt) {

        std::istringstream ss(str);
        if (!(ss >> std::get_time(&format, fmt.c_str()))) {
            std::cerr << "Parse failed\n";
        }
    }

    int getDate(){
        return date;
    }

    void setYear(int yearS) { format.tm_year = yearS; };
    void setMonth(int monthS) { format.tm_mon = monthS; };
    void setDay(int dayS) { format.tm_mday = dayS; };
};

#endif //BVA_EQUIVALENCECLASS_DATE_H

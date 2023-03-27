//
// Created by 刘健 on 2023/3/27.
//
#include "simple_str.h"
using namespace std;

Simple_Str::Simple_Str(char* data) {
    int len = strlen(data);
    m_data = new char[len+1];
    strcpy(m_data, data);
    m_size = len;
}

Simple_Str::Simple_Str(Simple_Str &str) {
    m_data = new char[str.length()+1];
    strcpy(m_data, str.m_data);
    m_size = str.length();
}

Simple_Str::~Simple_Str() {
    delete[] m_data;
    m_data = nullptr;
    m_size = 0;
}

Simple& Simple_Str::operator=(const Simple_Str &str) {
    delete[] m_data;
    m_data = new char[str.length()+1];
    strcpy(m_data, str.m_data);
    m_size = str.length();
    return *this;
}

bool Simple_Str::operator==(const Simple_Str &str) {
    return strcmp(m_data, str.m_data) == 0;
}

Simple_Str Simple_Str::operator+(const Simple_Str &str) {
    Simple_Str res;
    int len = this->length() + str.length();
    res.m_data = new char[len + 1];
    strcpy(res.m_data, this->m_data);
    strcat(res.m_data, str.m_data);
    res.m_size = len;
    return res;
}

Simple_Str Simple_Str::substr(int start, int len) {
    Simple_Str res;
    int nlen = len;
    if (start >= m_size) {
        res.m_data = new char[1];
        res.m_data[0] = '\0';
        res.m_size = 0;
        return res;
    } else if (start + len > m_size) {
        nlen = m_size - start;
    }

    res.m_data = new char[nlen+1];
    char* cur = m_data;
    int i = 0;
    while (i++ < start) {
        cur++;
    }
    strcpy(res.m_data, cur);
    res.m_size = nlen;
    return res;
}

int Simple_Str::length() {
    return m_size;
}

ostream& Simple_Str::operator<<(ostream& o, const Simple_Str& str) {
    return o;
}

int main() {
    Simple_Str str1;
    return 0;
}


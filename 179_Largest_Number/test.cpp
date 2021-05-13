#include "header.h"

void PrepareTestData(vector<TD_VI_S>& testData)
{
    TD_VI_S data;


    data.input = { 0, 0 };
    data.output = "0";
    testData.push_back(data);

    data.input = { 10, 2 };
    data.output = "210";
    testData.push_back(data);

    data.input = { 111311, 1113 };
    data.output = "1113111311";
    testData.push_back(data);

    data.input = { 3,30,34,5,9 };
    data.output = "9534330";
    testData.push_back(data);

    data.input = {1};
    data.output = "1";
    testData.push_back(data);

    data.input = { 10 };
    data.output = "10";
    testData.push_back(data);

}
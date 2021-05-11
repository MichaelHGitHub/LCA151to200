#include "header.h"

void PrepareTestData(vector<TD_S_I>& testData)
{
    TD_S_I data;

    data.input = "A";
    data.output = 1;
    testData.push_back(data);

    data.input = "AB";
    data.output = 28;
    testData.push_back(data);

    data.input = "ZY";
    data.output = 701;
    testData.push_back(data);


    data.input = "FXSHRXW";
    data.output = 2147483647;
    testData.push_back(data);

}
#include "header.h"


void PrepareTestData(vector<TD_I_S>& testData)
{
    TD_I_S data;

    data.input = 52;
    data.output = "AZ";
    testData.push_back(data);

    data.input = 28;
    data.output = "AB";
    testData.push_back(data);

    data.input = 1;
    data.output = "A";
    testData.push_back(data);



    data.input = 701;
    data.output = "ZY";
    testData.push_back(data);

    data.input = 2147483647;
    data.output = "FXSHRXW";
    testData.push_back(data);
}
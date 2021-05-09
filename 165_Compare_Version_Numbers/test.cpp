#include "header.h"

void PrepareTestData(vector<TD_S_S_I>& testData)
{
    TD_S_S_I data;

    data.input = "1.2";
    data.input2 = "1.10";
    data.output = -1;
    testData.push_back(data);

    data.input = "1.01";
    data.input2 = "1.001";
    data.output = 0;
    testData.push_back(data);

    data.input = "1.0";
    data.input2 = "1.0.0";
    data.output = 0;
    testData.push_back(data);

    data.input = "0.1";
    data.input2 = "1.1";
    data.output = -1;
    testData.push_back(data);

    data.input = "1.0.1";
    data.input2 = "1";
    data.output = 1;
    testData.push_back(data);

    data.input = "7.5.2.4";
    data.input2 = "7.5.3";
    data.output = -1;
    testData.push_back(data);

}
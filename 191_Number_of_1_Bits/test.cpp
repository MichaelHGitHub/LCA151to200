#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data;

    data.input = 0b00000000000000000000000000001011;
    data.output = 3;
    testData.push_back(data);

    data.input = 0b00000000000000000000000010000000;
    data.output = 1;
    testData.push_back(data);

    data.input = 0b11111111111111111111111111111101;
    data.output = 31;
    testData.push_back(data);

}

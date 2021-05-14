#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data;

    data.input = 0b11111111111111111111111111111100;
    data.output = 1073741823;
    testData.push_back(data);

    data.input = 0b00000010100101000001111010011100;
    data.output = 964176192;
    testData.push_back(data);

    data.input = 0b11111111111111111111111111111101;
    data.output = 3221225471;
    testData.push_back(data);

}

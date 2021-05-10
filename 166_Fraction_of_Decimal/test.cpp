#include "header.h"

void PrepareTestData(vector<TD_I_I_S>& testData)
{
    TD_I_I_S data;

    //data.input = -2147483648;
    //data.input2 = -1;
    //data.output = "2147483648";
    //testData.push_back(data);

    data.input = -2147483648;
    data.input2 = 1;
    data.output = "-2147483648";
    testData.push_back(data);

    data.input = -1;
    data.input2 = -2147483648;
    data.output = "0.0000000004656612873077392578125";
    testData.push_back(data);


    data.input = 7;
    data.input2 = -12;
    data.output = "-0.58(3)";
    testData.push_back(data);

    data.input = 2;
    data.input2 = 1;
    data.output = "2";
    testData.push_back(data);

    data.input = -50;
    data.input2 = 8;
    data.output = "-6.25";
    testData.push_back(data);

    data.input = 500;
    data.input2 = 10;
    data.output = "50";
    testData.push_back(data);

    data.input = 0;
    data.input2 = 3;
    data.output = "0";
    testData.push_back(data);

    data.input = 4;
    data.input2 = 333;
    data.output = "0.(012)";
    testData.push_back(data);

    data.input = 1;
    data.input2 = 2;
    data.output = "0.5";
    testData.push_back(data);

    data.input = 2;
    data.input2 = 1;
    data.output = "2";
    testData.push_back(data);

    data.input = 2;
    data.input2 = 3;
    data.output = "0.(6)";
    testData.push_back(data);



    data.input = 1;
    data.input2 = 5;
    data.output = "0.2";
    testData.push_back(data);

}
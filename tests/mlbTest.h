#ifndef MLBTEST_H
#define MLBTEST_H
#include "shared.h"

extern "C" {
#include "common.h"
}

TEST(mlb_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output8.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output8.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input8.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input8.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   //mwcrsr(txt, 1, 3);
   cursor_to_begin(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected8.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected8.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output8.txt", "r") : outputData = fopen("../../testing2/tests/output/output8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mlb_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output9.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input9.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input9.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 3, 3);
   cursor_to_begin(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected9.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected9.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output9.txt", "r") : outputData = fopen("../../testing2/tests/output/output9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mlb_test, test3) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output10.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output10.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);
    
    /*
     Load input data
     */
    
    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input10.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input10.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    cursor_to_begin(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected10.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected10.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output10.txt", "r") : outputData = fopen("../../testing2/tests/output/output10.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(mlb_test, test4) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output11.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output11.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);
    
    /*
     Load input data
     */
    
    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input11.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input11.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    cursor_to_begin(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected11.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected11.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output11.txt", "r") : outputData = fopen("../../testing2/tests/output/output11.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mlb_test, test5) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output12.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output12.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);
    
    /*
     Load input data
     */
    
    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input12.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input12.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    cursor_to_begin(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected12.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected12.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output12.txt", "r") : outputData = fopen("../../testing2/tests/output/output12.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(mlb_test, test6) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output13.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output13.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);
    
    /*
     Load input data
     */
    
    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input13.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input13.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    cursor_to_begin(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected13.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected13.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output13.txt", "r") : outputData = fopen("../../testing2/tests/output/output13.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mlb_test, test7) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output14.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output14.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);
    
    /*
     Load input data
     */
    
    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input14.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input14.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    cursor_to_begin(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected14.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected14.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output14.txt", "r") : outputData = fopen("../../testing2/tests/output/output14.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}


#endif // MLBTEST_H

#ifndef R1ETEST_H
#define R1ETEST_H
#include "shared.h"

/* Удаление пустой строки (одна строка) */
TEST(r1eTest, simpletest) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output15.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output15.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input15.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input15.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   remove_first_entry_line(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected15.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected15.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output15.txt", "r") : outputData = fopen("../../testing2/tests/output/output15.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/* Удаление пустой строки если их несколько */
TEST(r1eTest, multiple_empty_lines) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output16.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output16.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input16.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input16.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   remove_first_entry_line(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected16.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected16.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output16.txt", "r") : outputData = fopen("../../testing2/tests/output/output16.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/* Удаление пустой строки если она на первом месте */
TEST(r1eTest, first_line_is_empty) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output17.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output17.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input17.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input17.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   remove_first_entry_line(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected17.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected17.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output17.txt", "r") : outputData = fopen("../../testing2/tests/output/output17.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/* Удаление пустой строки если файл пустой */
TEST(r1eTest, empty_file) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output18.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output18.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input18.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input18.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    remove_first_entry_line(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected18.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected18.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output18.txt", "r") : outputData = fopen("../../testing2/tests/output/output18.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/* Удаление пустой строки если пустых строк нет */
TEST(r1eTest, no_empty_lines) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output19.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output19.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input19.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input19.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    remove_first_entry_line(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected19.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected19.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output19.txt", "r") : outputData = fopen("../../testing2/tests/output/output19.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/* Удаление пустой строки если она единственная в файлe */
TEST(r1eTest, single_empty_line) {
    /*
     Open output file
     */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output20.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output20.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input20.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input20.txt", MAXLINE);
    load(txt, inFile);
    
    /*
     Run test function
     */
    
    remove_first_entry_line(txt);
    show(txt);
    
    /*
     Close output file
     */
    
    returnStream(outputFile, oldstdOut);
    
    /*
     Execute test
     */
    
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected20.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected20.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output20.txt", "r") : outputData = fopen("../../testing2/tests/output/output20.txt", "r");
    
    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}




#endif // R1ETEST_H

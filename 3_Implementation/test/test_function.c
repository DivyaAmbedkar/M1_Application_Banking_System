/**
 * @file test_function.c
 * @author Kavin Vignes
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "feature.h"
#include "math.h"

void test_checkbalance(char);
void test_transfermoney(void);
void test_display(char);
void test_person(char);
void test_login(void);
void test_loginsu(void);
void test_account(void);
void test_accountcreated(void);
void test_afterlogin(void);
void test_logout(void);

void SetUp(){
/**
 * @brief (Required by the unity test framework)
 * 
 */
}
void tearDown(){
/**
 * @brief (Start of the application test)
 * 
 */
}

int main()
{
    UNITY_BEGIN();

/**
 * @brief (Run Test functions)
 * 
 */
    RUN_TEST(test_checkbalance)
    RUN_TEST(test_transfermoney)
    RUN_TEST(test_display)
    RUN_TEST(test_person)
    RUN_TEST(test_login)
    RUN_TEST(test_loginsu)
    RUN_TEST(test_account)
    RUN_TEST(test_accountcreated)
    RUN_TEST(test_afterlogin)
    RUN_TEST(test_logout)
    
    return UNITY_END();
}
   








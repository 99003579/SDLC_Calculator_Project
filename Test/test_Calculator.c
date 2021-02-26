#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include "calculator.h"
#define PROJECT_NAME "SDLC_Calculator_Project"

void test_convertFahCelsius(void);
void test_fahrenheit_to_kelvin(void);
void test_kelvin_to_fahrenheit(void);

void test_interest(void);
void test_Profit(void);
void test_Loss(void);


void test_areaofsquare(void);
void test_areaRectangle(void);


int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "TEST_FAHRENHEIT_TO_CELSIUS", test_fahrenheit_to_celsius);
  CU_add_test(suite, "TEST_CELSIUS_TO_FAHRENHEIT", test_celsius_to_fahrenheit);
  CU_add_test(suite, "TEST_FAHRENHEIT_TO_KELVIN", test_fahrenheit_to_kelvin);
  
  
  CU_add_test(suite, "TEST_INTEREST", test_interest);
  CU_add_test(suite, "TEST_PROFIT", test_profit);
  CU_add_test(suite, "TEST_LOSS", test_loss);
  
  
  CU_add_test(suite, "TEST_AREAOFSQUARE", test_square);
  CU_add_test(suite, "TEST_AREARECTANGLE", test_rectangle);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

//-------------------------------------------------------ARITHEMETIC OPERATIONS----------------------------------------------

void test_convertFahCelsius(void)
{
  CU_ASSERT_EQUAL(7.000, add(5,2));
  CU_ASSERT_EQUAL(10.00, add(7,3));
  CU_ASSERT_EQUAL(2000.00, add(500,1500));
}



void test_factorial(void) {
  CU_ASSERT_EQUAL(120, fact(5));
  CU_ASSERT_EQUAL(1, fact(1));
  CU_ASSERT_EQUAL(6, fact(3));
}



void test_interest(void) 
{
  CU_ASSERT_EQUAL(660.00, interest(1000,2,3));
  CU_ASSERT_EQUAL(2200.00, interest(5500,5,8));
  
}

void test_Profit(void)
{
  CU_ASSERT_EQUAL(2028.00 Profit, Profit(5496,3468));
  CU_ASSERT_EQUAL(54177.00 Profit,Profit(99453,45276);
  
}
                  
void test_Loss(void)
{
  CU_ASSERT_EQUAL(4412.00 Loss, Loss(3433,7845));
  CU_ASSERT_EQUAL(2297.00 Loss, Loss(7733,5436));
}

//Square and area

void test_square(void)
{
  CU_ASSERT_EQUAL(9.00, square(3));
}

void test_rectangle(void) {
  CU_ASSERT_EQUAL(20.00, rectangle(10,2));
}
  
